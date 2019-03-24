/*	Images byte arrays
 *	
 *	if you want to change the images, here are all the requisited constants
 *	
 *	upload your image to http://javl.github.io/image2cpp/
 *	in Image Settings (2) change background color and invert images colors
 *	so that the preview (3) shows black background and white foreground
 *	in output (4) change code format to arduino code and generate
 */

// include guard
#pragma once

// microphoneOff, 47px x 64px
const uint8_t micImageOffLocation[2] = {0, 0};
const uint8_t micImageOffSize[2] = {47, 64};
const uint8_t micImageOff [] PROGMEM = {
	0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x80, 0x00, 0x7f, 0xfc, 
	0x00, 0x00, 0xc0, 0x00, 0xff, 0xfe, 0x00, 0x00, 0xe0, 0x01, 0xff, 0xff, 0x00, 0x00, 0xf0, 0x03, 
	0xff, 0xff, 0x80, 0x00, 0xf8, 0x03, 0xff, 0xff, 0x80, 0x00, 0xfc, 0x03, 0xff, 0xff, 0x80, 0x00, 
	0xfe, 0x03, 0xff, 0xff, 0x80, 0x00, 0xff, 0x03, 0xff, 0xff, 0x80, 0x00, 0xff, 0x83, 0xff, 0xff, 
	0x80, 0x00, 0x7f, 0xc3, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xe3, 0xff, 0xff, 0x80, 0x00, 0x1f, 0xf1, 
	0xff, 0xff, 0x80, 0x00, 0x0f, 0xf8, 0xff, 0xff, 0x80, 0x00, 0x07, 0xfc, 0x7f, 0xff, 0x80, 0x00, 
	0x03, 0xfe, 0x3f, 0xff, 0x80, 0x00, 0x01, 0xff, 0x1f, 0xff, 0x80, 0x00, 0x00, 0xff, 0x8f, 0xff, 
	0x80, 0x00, 0x00, 0x7f, 0xc7, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xe3, 0xff, 0x80, 0x00, 0x00, 0x1f, 
	0xf1, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xf8, 0xff, 0x80, 0x00, 0x00, 0x07, 0xfc, 0x7f, 0x80, 0x00, 
	0x00, 0x03, 0xfe, 0x3f, 0x80, 0x00, 0x00, 0x01, 0xff, 0x1f, 0x80, 0x00, 0x00, 0x00, 0xff, 0x8f, 
	0x80, 0x00, 0x00, 0x00, 0x7f, 0xc7, 0x80, 0x00, 0x00, 0x02, 0x3f, 0xe3, 0x80, 0x00, 0x38, 0x03, 
	0x1f, 0xf1, 0x80, 0x38, 0x38, 0x03, 0x8f, 0xf8, 0x80, 0x38, 0x38, 0x03, 0xc7, 0xfc, 0x00, 0x38, 
	0x38, 0x03, 0xe3, 0xfe, 0x00, 0x38, 0x38, 0x03, 0xf1, 0xff, 0x00, 0x38, 0x3c, 0x03, 0xf8, 0xff, 
	0x80, 0x78, 0x3c, 0x03, 0xfc, 0x7f, 0xc0, 0x78, 0x3e, 0x03, 0xfe, 0x3f, 0xe0, 0xf8, 0x1f, 0x01, 
	0xff, 0x1f, 0xf1, 0xf0, 0x1f, 0x80, 0xff, 0x8f, 0xf8, 0xf0, 0x0f, 0x80, 0x7f, 0xc7, 0xfc, 0x60, 
	0x0f, 0xc0, 0x3f, 0xe3, 0xfe, 0x20, 0x07, 0xe0, 0x1f, 0xf1, 0xff, 0x00, 0x03, 0xf8, 0x00, 0x00, 
	0xff, 0x80, 0x03, 0xfc, 0x00, 0x00, 0x7f, 0xc0, 0x01, 0xff, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0xff, 
	0xf8, 0x3f, 0x1f, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0x8f, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xc7, 0xfc, 
	0x00, 0x0f, 0xff, 0xff, 0xe3, 0xfe, 0x00, 0x03, 0xff, 0xff, 0x81, 0xfe, 0x00, 0x00, 0xff, 0xfe, 
	0x00, 0xfe, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x7e, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x3e, 0x00, 0x00, 
	0x07, 0xc0, 0x00, 0x1e, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x0e, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x06, 
	0x00, 0x00, 0x07, 0xc0, 0x00, 0x02, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00
};

// microphoneOn, 47px x 64px
const uint8_t micImageOnLocation[2] = {0, 0};
const uint8_t micImageOnSize[2] = {47, 64};
const uint8_t micImageOn [] PROGMEM = {
	0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 
	0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 
	0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 
	0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 
	0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 
	0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 
	0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x38, 0x03, 
	0xff, 0xff, 0x80, 0x38, 0x38, 0x03, 0xff, 0xff, 0x80, 0x38, 0x38, 0x03, 0xff, 0xff, 0x80, 0x38, 
	0x38, 0x03, 0xff, 0xff, 0x80, 0x38, 0x38, 0x03, 0xff, 0xff, 0x80, 0x38, 0x3c, 0x03, 0xff, 0xff, 
	0x80, 0x78, 0x3c, 0x03, 0xff, 0xff, 0x80, 0x78, 0x3e, 0x03, 0xff, 0xff, 0x80, 0xf8, 0x1f, 0x01, 
	0xff, 0xff, 0x01, 0xf0, 0x1f, 0x80, 0xff, 0xfe, 0x03, 0xf0, 0x0f, 0x80, 0x7f, 0xfc, 0x03, 0xe0, 
	0x0f, 0xc0, 0x3f, 0xf8, 0x07, 0xe0, 0x07, 0xe0, 0x1f, 0xf0, 0x1f, 0xc0, 0x03, 0xf8, 0x00, 0x00, 
	0x3f, 0x80, 0x03, 0xfc, 0x00, 0x00, 0x7f, 0x80, 0x01, 0xff, 0x00, 0x01, 0xff, 0x00, 0x00, 0xff, 
	0xf8, 0x3f, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 
	0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00
};