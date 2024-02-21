# Discord-mute-indicator

![Overview image](https://i.imgur.com/zoOTfEr.jpg)

This project uses HID emulation that ATMega 32u4 supports. It reads the status of the keyboard LEDs (Caps, Scroll or Num lock) and displays an image representing status of the microphone.

By default the display will turn off after 15 minutes of inactivity, you can change that time, or disable the feature altogether by going into [config.h](DiscordMuteIndicator/config.h). You can also change some other settings in there.

If you want to change the images, you can go to [images.h](DiscordMuteIndicator/images.h), in there you will find a short information about how to make your own image byte arrays.

## Update after 8 months of use

I've noticed a slight burn-in of the OLED display:
![Burn-in](https://i.imgur.com/culptsc.png)
It might be a good idea to randomize the location of the icon on every startup.

## Demonstration video

[Streamable](https://streamable.com/tyxeh)


## Hardware, software and libraries used
Hardware
- "Arduino" Pro Micro with ATMega 32u4, ~3$ OR Arduino Leonardo should work
- 0.96" 128×64 OLED display with SSD1306 driver, ~2$ 

Software
- Arduino IDE or Visual Studio Code with PlatormIO
- [Sparkfun custom boards manager](https://learn.sparkfun.com/pages/CustomBoardsArduino)

Libraries
- https://github.com/NicoHood/HID
- https://github.com/adafruit/Adafruit_SSD1306
- https://github.com/adafruit/Adafruit-GFX-Library

## Contact
- [Twitter](https://twitter.com/Oxmstr)

## Version history
```
1.0 Release (24.03.2019)
```

### Donate
[If you like, you can donate via PayPal](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=SRSZDPQ3PZMK4&item_name=Discord+mute+indicator&currency_code=EUR&source=url)

### License
```
GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007

Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
Everyone is permitted to copy and distribute verbatim copies
of this license document, but changing it is not allowed.
```
