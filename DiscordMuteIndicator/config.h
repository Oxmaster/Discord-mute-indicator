/*	Configuration file
 *	
 *	A quick way for user to change some things
 */

// include guard
#pragma once

/*	OLED size
 *	
 *	If you use the 128*32 version, here you can change the size
 *	note that if you do so, you need to change the images, and
 *	some constants in "images.h" to match the smaller display
 */
const uint8_t OLEDX = 128;
const uint8_t OLEDY = 64;

// i2c address of the display
const uint8_t OLEDAddr = 0x3C;

// how often to refresh the display, in ms (~40 ms to display data)
const uint16_t refreshTime = 150;

// display muted microphone if triggerLed (scroll lock by default)
// is ON (1) or OFF (0)
const bool mutedMicrophoneImageWhenTriggerLed = 1;

/*	which LED will trigger the images
 *	
 *	possible choices:
 *
 *	LED_NUM_LOCK
 *	LED_CAPS_LOCK
 *	LED_SCROLL_LOCK
 *	LED_COMPOSE
 *	LED_KANA
 *	LED_POWER
 *	LED_SHIFT
 *	LED_DO_NOT_DISTURB
 */
#define triggerLed LED_SCROLL_LOCK

/*	autoDisable feature
 *	
 *	This feature "turns off" (clears) the display when you are not
 *	changing the state of triggerLed, so the display won't be "on"
 *	all the time.
 *	
 *	When you chage it to 0, the display will be always displaying
 *	current status of triggerLed
 */
#define AUTODISABLE 1

/*	after autoDisbleTime seconds of inactivity, clear the display
 *	1 - 4294967 seconds, 0 breakes things
 */
const uint32_t autoDisableTime = 15 * 60;
