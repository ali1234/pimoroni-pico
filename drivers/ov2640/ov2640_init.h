#ifndef OV2640_INIT_H
#define OV2640_INIT_H
#include <stdint.h>

static const uint8_t ov2640_svga[][2] = {
	{0xff, 0x00},  /* Device control register list Table 12 */
	{0x2c, 0xff},  /* Reserved                              */
	{0x2e, 0xdf},  /* Reserved                              */
	{0xff, 0x01},  /* Device control register list Table 13 */
	{0x3c, 0x32},  /* Reserved                              */
	{0x11, 0x01},  /* Clock Rate Control                    */
	{0x09, 0x02},  /* Common control 2                      */
	{0x04, 0xA8},  /* Mirror                                */
	{0x13, 0xe5},  /* Common control 8                      */
	{0x14, 0x48},  /* Common control 9                      */
	{0x2c, 0x0c},  /* Reserved                              */
	{0x33, 0x78},  /* Reserved                              */
	{0x3a, 0x33},  /* Reserved                              */
	{0x3b, 0xfB},  /* Reserved                              */
	{0x3e, 0x00},  /* Reserved                              */
	{0x43, 0x11},  /* Reserved                              */
	{0x16, 0x10},  /* Reserved                              */
	{0x4a, 0x81},  /* Reserved                              */
	{0x21, 0x99},  /* Reserved                              */
	{0x24, 0x40},  /* Luminance signal High range           */
	{0x25, 0x38},  /* Luminance signal low range            */
	{0x26, 0x82},  /*                                       */
	{0x5c, 0x00},  /* Reserved                              */
	{0x63, 0x00},  /* Reserved                              */
	{0x46, 0x3f},  /* Frame length adjustment               */
	{0x0c, 0x3c},  /* Common control 3                      */
	{0x61, 0x70},  /* Histogram algo low level              */
	{0x62, 0x80},  /* Histogram algo high level             */
	{0x7c, 0x05},  /* Reserved                              */
	{0x20, 0x80},  /* Reserved                              */
	{0x28, 0x30},  /* Reserved                              */
	{0x6c, 0x00},  /* Reserved                              */
	{0x6d, 0x80},  /* Reserved                              */
	{0x6e, 0x00},  /* Reserved                              */
	{0x70, 0x02},  /* Reserved                              */
	{0x71, 0x94},  /* Reserved                              */
	{0x73, 0xc1},  /* Reserved                              */
	{0x3d, 0x34},  /* Reserved                              */
	{0x5a, 0x57},  /* Reserved                              */
	{0x12, 0x00},  /* Common control 7                      */
	{0x11, 0x01},  /* Clock Rate Control                   2*/
	{0x17, 0x11},  /* Horiz window start MSB 8bits          */
	{0x18, 0x75},  /* Horiz window end MSB 8bits            */
	{0x19, 0x01},  /* Vert window line start MSB 8bits      */
	{0x1a, 0x97},  /* Vert window line end MSB 8bits        */
	{0x32, 0x36},
	{0x03, 0x0f},
	{0x37, 0x40},
	{0x4f, 0xbb},
	{0x50, 0x9c},
	{0x5a, 0x57},
	{0x6d, 0x80},
	{0x6d, 0x38},
	{0x39, 0x02},
	{0x35, 0x88},
	{0x22, 0x0a},
	{0x37, 0x40},
	{0x23, 0x00},
	{0x34, 0xa0},
	{0x36, 0x1a},
	{0x06, 0x02},
	{0x07, 0xc0},
	{0x0d, 0xb7},
	{0x0e, 0x01},
	{0x4c, 0x00},
	{0xff, 0x00},
	{0xe5, 0x7f},
	{0xf9, 0xc0},
	{0x41, 0x24},
	{0xe0, 0x14},
	{0x76, 0xff},
	{0x33, 0xa0},
	{0x42, 0x20},
	{0x43, 0x18},
	{0x4c, 0x00},
	{0x87, 0xd0},
	{0x88, 0x3f},
	{0xd7, 0x03},
	{0xd9, 0x10},
	{0xd3, 0x82},
	{0xc8, 0x08},
	{0xc9, 0x80},
	{0x7d, 0x00},
	{0x7c, 0x03},
	{0x7d, 0x48},
	{0x7c, 0x08},
	{0x7d, 0x20},
	{0x7d, 0x10},
	{0x7d, 0x0e},
	{0x90, 0x00},
	{0x91, 0x0e},
	{0x91, 0x1a},
	{0x91, 0x31},
	{0x91, 0x5a},
	{0x91, 0x69},
	{0x91, 0x75},
	{0x91, 0x7e},
	{0x91, 0x88},
	{0x91, 0x8f},
	{0x91, 0x96},
	{0x91, 0xa3},
	{0x91, 0xaf},
	{0x91, 0xc4},
	{0x91, 0xd7},
	{0x91, 0xe8},
	{0x91, 0x20},
	{0x92, 0x00},
	{0x93, 0x06},
	{0x93, 0xe3},
	{0x93, 0x02},
	{0x93, 0x02},
	{0x93, 0x00},
	{0x93, 0x04},
	{0x93, 0x00},
	{0x93, 0x03},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x96, 0x00},
	{0x97, 0x08},
	{0x97, 0x19},
	{0x97, 0x02},
	{0x97, 0x0c},
	{0x97, 0x24},
	{0x97, 0x30},
	{0x97, 0x28},
	{0x97, 0x26},
	{0x97, 0x02},
	{0x97, 0x98},
	{0x97, 0x80},
	{0x97, 0x00},
	{0x97, 0x00},
	{0xc3, 0xef},
	{0xff, 0x00},
	{0xba, 0xdc},
	{0xbb, 0x08},
	{0xb6, 0x24},
	{0xb8, 0x33},
	{0xb7, 0x20},
	{0xb9, 0x30},
	{0xb3, 0xb4},
	{0xb4, 0xca},
	{0xb5, 0x43},
	{0xb0, 0x5c},
	{0xb1, 0x4f},
	{0xb2, 0x06},
	{0xc7, 0x00},
	{0xc6, 0x51},
	{0xc5, 0x11},
	{0xc4, 0x9c},
	{0xbf, 0x00},
	{0xbc, 0x64},
	{0xa6, 0x00},
	{0xa7, 0x1e},
	{0xa7, 0x6b},
	{0xa7, 0x47},
	{0xa7, 0x33},
	{0xa7, 0x00},
	{0xa7, 0x23},
	{0xa7, 0x2e},
	{0xa7, 0x85},
	{0xa7, 0x42},
	{0xa7, 0x33},
	{0xa7, 0x00},
	{0xa7, 0x23},
	{0xa7, 0x1b},
	{0xa7, 0x74},
	{0xa7, 0x42},
	{0xa7, 0x33},
	{0xa7, 0x00},
	{0xa7, 0x23},
	{0x7f, 0x00},
	{0xe5, 0x1f},
	{0xe1, 0x67},
	{0xe0, 0x00},
	{0xdd, 0x7f},
	{0x05, 0x00},
	{0xFF, 0x00},
	{0x05, 0x00},
//	{0xda, 0x09},  // Byte swapped RGB565
	{0xda, 0x00},  // YUV422 YUYV
	{0x98, 0x00},
	{0x99, 0x00},
//	{0x00, 0x00},
	{0xff, 0x00},
	{0xe0, 0x04},
	{0xc0, 0xc8},
	{0xc1, 0x96},
	{0x8c, 0x00},  
	{0x86, 0x3d}, // CTRL2: DCW | SDE | UV_ADJ | UV_AVG
#if 0
	{0x50, 0x89}, // CTRLI: LP_DP, VDIV=1, HDIV=1
	{0x51, 0x90}, // HSIZE: 400 * 4
	{0x52, 0x2c}, // VSIZE: 300 * 4
	{0x53, 0x00},
	{0x54, 0x00},
	{0x55, 0x88},
	{0x57, 0x00},
	{0x5a, 0xc8}, // OUTW: 200 * 4 = 800
	{0x5b, 0x96}, // OUTH: 150 * 4 = 600
	{0x5c, 0x00},
	{0xd3, 0x02}, // PCLK_DIV = 2
#else
	{0x50, 0x00}, // CTRLI: VDIV=0, HDIV=0
	{0x51, 0x90}, // HSIZE: 400 * 4
	{0x52, 0x2c}, // VSIZE: 300 * 4
	{0x53, 0x00},
	{0x54, 0x00},
	{0x55, 0x88},
	{0x57, 0x00},
	{0x5a, 0x90}, // OUTW: 400 * 4 = 1600
	{0x5b, 0x2c}, // OUTH: 300 * 4 = 1200
	{0x5c, 0x05},
	{0xd3, 0x80}, // PCLK_DIV = AUTO
#endif
	{0xe0, 0x00},
	{0x00, 0x00}
};

static const uint8_t ov2640_uxga_cif[][2] = {   
	{0xff, 0x00},   
	{0xe0, 0x04}, // RESET DVP
	{0xc0, 0xc8}, // HSIZE8: 1600
	{0xc1, 0x96}, // VSIZE8: 1200
	{0x86, 0x35}, // CTRL2: DCW | SDE | UV_AVG | CMX  
	{0x50, 0x92}, // CTRLI: LP_DP, VDIV=2, HDIV=2  
	{0x51, 0x90}, // HSIZE: 400 * 4
	{0x52, 0x2c}, // VSIZE: 300 * 4
	{0x53, 0x00},   
	{0x54, 0x00},   
	{0x55, 0x88},   
	{0x57, 0x00},   
	{0x5a, 0x58}, // OUTW: 88 * 4 = 352
	{0x5b, 0x48}, // OUTH: 72 * 4 = 288
	{0x5c, 0x00}, 
	{0xd3, 0x08}, // PCLK_DIV = 8 
	{0xe0, 0x00}   
};   

#endif
