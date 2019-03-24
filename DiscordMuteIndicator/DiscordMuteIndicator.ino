/*	License
 *
 *	GNU GENERAL PUBLIC LICENSE
 *	Version 3, 29 June 2007
 *
 *	Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 *	Everyone is permitted to copy and distribute verbatim copies
 *	of this license document, but changing it is not allowed.
 *	
 *	see LICENSE.txt
 */

/*	DiscordMuteIndicator
 *
 *	Version: 1.0
 *	Date: 24.03.2019
 *
 *	Author: Paul Oleszczyk
 *	Twitter: @oxmstr
 *	Email: paul.oleszczyk@gmail.com
 *	Github: https://github.com/Oxmaster/Discord-mute-indicator
 */

/*	hardware:
 *	*	"Arduino" Pro Micro ATMega 32u4 5V, 16Mhz
 *	*	128×64 0,96" OLED display with SSD1306 driver via I2C
 *	
 *	software:
 *	*	sparkfun Pro Micro board 
 *	*		https://learn.sparkfun.com/pages/CustomBoardsArduino
 *	*
 *	*	Arduino IDE
 *
 *	libs used:
 *	*	NicoHood HID-Project
 *	*		https://github.com/NicoHood/HID
 *	*
 *	*	Adafruit GFX && Adafruit SSD1306
 *	*		https://github.com/adafruit/Adafruit-GFX-Library
 *	*		https://github.com/adafruit/Adafruit_SSD1306
 */

#include "config.h"
#include "images.h"

#include <HID-Project.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


// vars --------------------------------------------------------------

// OLED constructor
Adafruit_SSD1306 OLED(OLEDX, OLEDY, &Wire, -1);

// current status of triggerLed (scroll lock by default)
bool micState = 0;

// time keeping
uint32_t currentMillis = 0;


// functions declarations --------------------------------------------

// poll the status of the triggerLed
void poll();

// draw microphone image, dependent on the micState
void drawMic();

/* check if enough time has passed to disable the display
 * returns 0 if feature is disabled or activity is detected
 * returns 1 if enough time has passed without any activity
 */
bool autoDisable();


// main --------------------------------------------------------------

void setup() {

	OLED.begin(SSD1306_SWITCHCAPVCC, OLEDAddr);
	OLED.clearDisplay();
	OLED.display();
	
	BootKeyboard.begin();
}

void loop() {
	currentMillis = millis();
	
	static uint32_t previousMillis = 0;
	
	if ((currentMillis - previousMillis) >= refreshTime){
		poll();
		previousMillis = currentMillis;
		
		if (autoDisable() == 0){
			drawMic();
		}
	}
}

// functions ---------------------------------------------------------

bool autoDisable(){

	// preprocessor directive, if AUTODISABLE is 0, don't include this code
	#if AUTODISABLE
		static uint32_t previousMillis = currentMillis;
		
		static bool micStatePrevious = !micState;
		// status if display is currently ON (1) or OFF (0)
		static bool displayStatus = 1;
		
		if (micStatePrevious != micState){
			
			micStatePrevious = micState;
			previousMillis = currentMillis;
			displayStatus = 1;
			
			return 0;
		}
		
		// if display is OFF AND there was no change to state of triggerLed
		if (displayStatus == 1){
			return 1;
		}
		
		// if enough time has passed AND display is currenly ON
		if (((currentMillis - previousMillis) >= (autoDisableTime * 1000)) &&
			(displayStatus == 1)){
			
			displayStatus = 0;
			previousMillis = currentMillis;
			micStatePrevious = micState;
			
			OLED.clearDisplay();
			OLED.display();
			
			return 1;
		}
	
	#endif
	
	return 0;
}

void poll(){
	// compare bit masks if triggerLed (by default scroll lock) is ON or OFF
	micState = (BootKeyboard.getLeds() & triggerLed) ? 1 : 0;
}

void drawMic(){
	static bool previousMicState = !micState;
	
	// if there was no change, there is no need to update the display
	if (previousMicState != micState){
		
		OLED.clearDisplay();
		
		if (micState == mutedMicrophoneImageWhenTriggerLed) {
			OLED.drawBitmap(
				micImageOffLocation[0], micImageOffLocation[1],
				micImageOff,
				micImageOffSize[0], micImageOffSize[1], 1);
		} else {
			OLED.drawBitmap(
				micImageOnLocation[0], micImageOnLocation[1],
				micImageOn,
				micImageOnSize[0], micImageOnSize[1], 1);
		}
		
		OLED.display();
		previousMicState = micState;
	}
}
