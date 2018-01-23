#ifndef __ePaper_CFAP104212C00213_H__
#define __ePaper_CFAP104212C00213_H__
//=============================================================================
// "Arduino" example program for Crystalfontz ePaper. 
//
// This project is for the CFAP128296D0-0290 :
//
//   https://www.crystalfontz.com/product/cfap128296d00290
//=============================================================================
// Arduino digital pins used for the e-paper display 
#define EPD_BUSSEL  2
#define EPD_READY   3
#define EPD_RESET   4
#define EPD_DC      5
#define EPD_CS      10
//-----------------------------------------------------------------------------
void ePaper_Init(void);
void Load_Flash_Image_To_Display_RAM(uint16_t width_pixels,
                                     uint16_t height_pixels,
                                     const uint8_t *BW_image,
                                     const uint8_t *red_image);
void Load_Inverse_Flash_Image_To_Display_RAM(uint16_t width_pixels,
	uint16_t height_pixels,
	const uint8_t *BW_image,
	const uint8_t *red_image);
void ePaper_PowerOff(void);                                     
//=============================================================================
#endif 
