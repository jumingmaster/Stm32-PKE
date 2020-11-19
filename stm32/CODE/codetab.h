/************************************************************************************
*  Copyright (c), 2015, HelTec Automatic Technology co.,LTD.
*            All rights reserved.
*
* Http:    www.heltec.cn
* Email:   cn.heltec@gmail.com
* WebShop: heltec.taobao.com
*
* File name: OLED.h
* Project  : OLED
* Processor: STC89C52
* Compiler : Keil C51 Compiler
* 
* Author : Aaron Lee
* Version: 1.00
* Date   : 2014.3.24
* Email  : hello14blog@gmail.com
* Modification: none
* 
* Description:
* 1. 128*64点整OLED模块功能演示程序的字表，仅适用heltec.taobao.com所售产品;
* 2. 字表由打包资料中的“取字软件”计算得出;
* 3. 取字方式 -- 共阴、列行式、逆向输出
*
* Others: none;
*
* Function List: none;
*
* History: none;
*
*************************************************************************************/

/***************************16*16鐨勭偣闃靛瓧浣撳彇妯℃柟寮忥細鍏遍槾鈥斺€斿垪琛屽紡鈥斺€旈€嗗悜杈撳嚭*********/
unsigned char F16x16[] =
{	
        0x00, 0x00, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x08, 0xFF, 0x08, 0x09, 0x0A, 0xC8, 0x08, 0x00,
    0x80, 0x60, 0x1F, 0x00, 0x10, 0x20, 0x1F, 0x80, 0x40, 0x21, 0x16, 0x18, 0x26, 0x41, 0xF8, 0x00,/*成，0*/

    0x08, 0x08, 0x08, 0xF8, 0x08, 0x08, 0x08, 0x10, 0x10, 0xFF, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
    0x10, 0x30, 0x10, 0x1F, 0x08, 0x88, 0x48, 0x30, 0x0E, 0x01, 0x40, 0x80, 0x40, 0x3F, 0x00, 0x00,/*功，1*/

    0x80, 0x82, 0x82, 0x82, 0xFE, 0x82, 0x82, 0x82, 0x82, 0x82, 0xFE, 0x82, 0x82, 0x82, 0x80, 0x00,
    0x00, 0x80, 0x40, 0x30, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,/*开，2*/

    0x20, 0x10, 0x2C, 0xE7, 0x24, 0x24, 0x00, 0xE2, 0x2C, 0x20, 0xBF, 0x20, 0x28, 0xE6, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x7F, 0x21, 0x11, 0x80, 0x4F, 0x20, 0x10, 0x0F, 0x10, 0x20, 0x4F, 0x80, 0x00,/*锁，3*/

    0x00, 0x40, 0x30, 0x1E, 0x10, 0x10, 0x10, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00,
    0x81, 0x81, 0x41, 0x21, 0x11, 0x0D, 0x03, 0x01, 0x03, 0x0D, 0x11, 0x21, 0x41, 0x81, 0x81, 0x00,/*失，4*/

    0x00, 0xFE, 0x02, 0xFA, 0x02, 0xFE, 0x40, 0x20, 0xD8, 0x17, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x00,
    0x80, 0x47, 0x30, 0x0F, 0x10, 0x67, 0x80, 0x40, 0x21, 0x16, 0x08, 0x16, 0x21, 0x40, 0x80, 0x00,/*败，5*/

    0x20, 0x10, 0xEC, 0x27, 0xF4, 0x2C, 0xE0, 0x00, 0x22, 0x92, 0x0E, 0xD2, 0x22, 0x1E, 0x00, 0x00,
    0x80, 0x60, 0x1F, 0x09, 0x3F, 0x89, 0xFF, 0x00, 0x0A, 0x09, 0x09, 0xFF, 0x09, 0x09, 0x08, 0x00,/*解，6*/

    0x20, 0x10, 0x2C, 0xE7, 0x24, 0x24, 0x00, 0xE2, 0x2C, 0x20, 0xBF, 0x20, 0x28, 0xE6, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x7F, 0x21, 0x11, 0x80, 0x4F, 0x20, 0x10, 0x0F, 0x10, 0x20, 0x4F, 0x80, 0x00,/*锁，7*/

    0x10, 0x10, 0x10, 0xFF, 0x10, 0x90, 0x00, 0x3F, 0x48, 0x48, 0x44, 0x44, 0x44, 0x42, 0x70, 0x00,
    0x04, 0x44, 0x82, 0x7F, 0x01, 0x00, 0x00, 0xFF, 0x49, 0x49, 0x49, 0x49, 0x49, 0xFF, 0x00, 0x00,/*指，8*/

    0x20, 0x30, 0xAC, 0x63, 0x10, 0x08, 0x08, 0xF8, 0x09, 0x0E, 0x08, 0xF8, 0x08, 0x08, 0x00, 0x00,
    0x22, 0x67, 0x22, 0x12, 0x92, 0x80, 0x40, 0x21, 0x16, 0x08, 0x16, 0x21, 0x40, 0x80, 0x80, 0x00,/*纹，9*/

    0x40, 0x40, 0x42, 0xCC, 0x00, 0x00, 0x20, 0x24, 0xA4, 0x24, 0x3F, 0xA4, 0x24, 0xA4, 0x60, 0x00,
    0x00, 0x00, 0x00, 0x7F, 0x20, 0x10, 0x88, 0x8A, 0x4C, 0x29, 0x18, 0x0F, 0x18, 0x28, 0xC8, 0x00,/*读，10*/

    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFF, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x02, 0x04, 0x08, 0x10, 0x00, 0x00, 0x00,/*卡，11*/

    0x88, 0x68, 0x1F, 0xC8, 0x08, 0x10, 0xC8, 0x54, 0x52, 0xD1, 0x12, 0x94, 0x08, 0xD0, 0x10, 0x00,
    0x09, 0x19, 0x09, 0xFF, 0x05, 0x00, 0xFF, 0x12, 0x92, 0xFF, 0x00, 0x5F, 0x80, 0x7F, 0x00, 0x00,/*输，12*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE2, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x40, 0x20, 0x10, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x30, 0x40, 0x80, 0x80, 0x00,/*入，13*/

    0x04, 0x04, 0xE4, 0x04, 0x0F, 0xF4, 0x04, 0x04, 0xF4, 0x44, 0xCF, 0x44, 0x44, 0x44, 0x04, 0x00,
    0x40, 0x40, 0x7D, 0x44, 0x44, 0x7D, 0x44, 0x45, 0x44, 0x7C, 0x44, 0x45, 0x7C, 0x40, 0x40, 0x00,/*蓝，14*/

    0x00, 0x00, 0xC2, 0xB2, 0x82, 0x82, 0x82, 0x82, 0x82, 0xFE, 0x82, 0x82, 0x82, 0x82, 0x80, 0x00,
    0x00, 0x20, 0x20, 0x10, 0x08, 0x04, 0x02, 0x41, 0x80, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*牙，15*/

    0x40, 0x30, 0xEF, 0x24, 0x24, 0x80, 0xE4, 0x9C, 0x10, 0x54, 0x54, 0xFF, 0x54, 0x7C, 0x10, 0x00,
    0x01, 0x01, 0x7F, 0x21, 0x51, 0x26, 0x18, 0x27, 0x44, 0x45, 0x45, 0x5F, 0x45, 0x45, 0x44, 0x00,/*键，16*/

    0x20, 0x20, 0x20, 0xFC, 0x24, 0x26, 0xA5, 0x2C, 0x34, 0x24, 0x24, 0xFC, 0x20, 0x20, 0x20, 0x00,
    0x40, 0x42, 0x7D, 0x44, 0x44, 0x7C, 0x44, 0x45, 0x44, 0x7D, 0x46, 0x45, 0x7C, 0x40, 0x40, 0x00,/*盘，17*/

    0x80, 0x82, 0x82, 0x82, 0xFE, 0x82, 0x82, 0x82, 0x82, 0x82, 0xFE, 0x82, 0x82, 0x82, 0x80, 0x00,
    0x00, 0x80, 0x40, 0x30, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,/*开，18*/

    0x00, 0x00, 0x10, 0x11, 0x16, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x14, 0x13, 0x10, 0x00, 0x00, 0x00,
    0x81, 0x81, 0x41, 0x41, 0x21, 0x11, 0x0D, 0x03, 0x0D, 0x11, 0x21, 0x41, 0x41, 0x81, 0x81, 0x00,/*关，19*/

    0x00, 0xF8, 0x01, 0x06, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x00, 0x00,
    0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x7F, 0x00, 0x00,/*门，20*/
    
    0x10, 0x10, 0x10, 0xFF, 0x90, 0x20, 0x98, 0x88, 0x88, 0xE9, 0x8E, 0x88, 0x88, 0xA8, 0x98, 0x00,
    0x02, 0x42, 0x81, 0x7F, 0x00, 0x00, 0x80, 0x84, 0x4B, 0x28, 0x10, 0x28, 0x47, 0x80, 0x00, 0x00,/*按21*/

    0x40, 0x42, 0xCC, 0x00, 0x00, 0x44, 0x54, 0x54, 0x54, 0x7F, 0x54, 0x54, 0x54, 0x44, 0x40, 0x00,
    0x00, 0x00, 0x7F, 0x20, 0x10, 0x00, 0xFF, 0x15, 0x15, 0x15, 0x55, 0x95, 0x7F, 0x00, 0x00, 0x00,/*请22*/

    0x40, 0x30, 0xEF, 0x24, 0x64, 0x48, 0x48, 0x7F, 0x48, 0x48, 0x48, 0x7F, 0x48, 0x48, 0x40, 0x00,
    0x01, 0x01, 0x7F, 0x21, 0x11, 0x00, 0xFF, 0x49, 0x49, 0x49, 0x49, 0x49, 0xFF, 0x00, 0x00, 0x00,/*错23*/

    0x40, 0x42, 0xCC, 0x00, 0x00, 0x80, 0x9E, 0x92, 0x92, 0x92, 0x92, 0x92, 0x9E, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x7F, 0x20, 0x94, 0x84, 0x44, 0x24, 0x14, 0x0F, 0x14, 0x24, 0x44, 0x84, 0x84, 0x00,/*误24*/

    0x10, 0x8C, 0x44, 0x04, 0xE4, 0x04, 0x95, 0xA6, 0x44, 0x24, 0x14, 0x84, 0x44, 0x94, 0x0C, 0x00,
    0x02, 0x02, 0x7A, 0x41, 0x41, 0x43, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x43, 0xF8, 0x00, 0x00, 0x00,/*密25*/

    0x04, 0x84, 0xE4, 0x5C, 0x44, 0xC4, 0x00, 0x02, 0xF2, 0x82, 0x82, 0x82, 0xFE, 0x80, 0x80, 0x00,
    0x02, 0x01, 0x7F, 0x10, 0x10, 0x3F, 0x00, 0x08, 0x08, 0x08, 0x08, 0x48, 0x88, 0x40, 0x3F, 0x00,/*码26*/
    
    0x00,0x02,0x02,0xC2,0x02,0x02,0x02,0xFE,0x82,0x82,0x82,0x82,0x82,0x02,0x00,0x00,
    0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,/*正27*/

    0x04,0x84,0xE4,0x5C,0x44,0xC4,0x20,0x10,0xE8,0x27,0x24,0xE4,0x34,0x2C,0xE0,0x00,
    0x02,0x01,0x7F,0x10,0x10,0x3F,0x80,0x60,0x1F,0x09,0x09,0x3F,0x49,0x89,0x7F,0x00,/*确28*/
};

/************************************6*8的点阵************************************/
const unsigned char F6x8[][6] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// sp
	0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,// !
	0x00, 0x00, 0x07, 0x00, 0x07, 0x00,// "
	0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,// #
	0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,// $
	0x00, 0x62, 0x64, 0x08, 0x13, 0x23,// %
	0x00, 0x36, 0x49, 0x55, 0x22, 0x50,// &
	0x00, 0x00, 0x05, 0x03, 0x00, 0x00,// '
	0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,// (
	0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,// )
	0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,// *
	0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,// +
	0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,// ,
	0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// -
	0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// .
	0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// /
	0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
	0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,// 1
	0x00, 0x42, 0x61, 0x51, 0x49, 0x46,// 2
	0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,// 3
	0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,// 4
	0x00, 0x27, 0x45, 0x45, 0x45, 0x39,// 5
	0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
	0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 7
	0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 8
	0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,// 9
	0x00, 0x00, 0x36, 0x36, 0x00, 0x00,// :
	0x00, 0x00, 0x56, 0x36, 0x00, 0x00,// ;
	0x00, 0x08, 0x14, 0x22, 0x41, 0x00,// <
	0x00, 0x14, 0x14, 0x14, 0x14, 0x14,// =
	0x00, 0x00, 0x41, 0x22, 0x14, 0x08,// >
	0x00, 0x02, 0x01, 0x51, 0x09, 0x06,// ?
	0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,// @
	0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,// A
	0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,// B
	0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,// C
	0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,// D
	0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,// E
	0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,// F
	0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,// G
	0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,// H
	0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,// I
	0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,// J
	0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,// K
	0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,// L
	0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,// M
	0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,// N
	0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,// O
	0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,// P
	0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
	0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,// R
	0x00, 0x46, 0x49, 0x49, 0x49, 0x31,// S
	0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,// T
	0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,// U
	0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,// V
	0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,// W
	0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// X
	0x00, 0x07, 0x08, 0x70, 0x08, 0x07,// Y
	0x00, 0x61, 0x51, 0x49, 0x45, 0x43,// Z
	0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,// [
	0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55,// 55
	0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,// ]
	0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// ^
	0x00, 0x40, 0x40, 0x40, 0x40, 0x40,// _
	0x00, 0x00, 0x01, 0x02, 0x04, 0x00,// '
	0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// a
	0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,// b
	0x00, 0x38, 0x44, 0x44, 0x44, 0x20,// c
	0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,// d
	0x00, 0x38, 0x54, 0x54, 0x54, 0x18,// e
	0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,// f
	0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,// g
	0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,// h
	0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,// i
	0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,// j
	0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,// k
	0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,// l
	0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,// m
	0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,// n
	0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// o
	0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,// p
	0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,// q
	0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,// r
	0x00, 0x48, 0x54, 0x54, 0x54, 0x20,// s
	0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,// t
	0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,// u
	0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,// v
	0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,// w
	0x00, 0x44, 0x28, 0x10, 0x28, 0x44,// x
	0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,// y
	0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,// z
	0x14, 0x14, 0x14, 0x14, 0x14, 0x14,// horiz lines
};
/****************************************8*16的点阵************************************/
const unsigned char F8X16[]=	  
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 0
  0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00,//! 1
  0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//" 2
  0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00,//# 3
  0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00,//$ 4
  0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00,//% 5
  0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10,//& 6
  0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//' 7
  0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,//( 8
  0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00,//) 9
  0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,//* 10
  0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00,//+ 11
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00,//, 12
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,//- 13
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,//. 14
  0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00,/// 15
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,//0 16
  0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//1 17
  0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,//2 18
  0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,//3 19
  0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,//4 20
  0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,//5 21
  0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,//6 22
  0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,//7 23
  0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,//8 24
  0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,//9 25
  0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,//: 26
  0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00,//; 27
  0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,//< 28
  0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,//= 29
  0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,//> 30
  0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00,//? 31
  0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00,//@ 32
  0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,//A 33
  0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,//B 34
  0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,//C 35
  0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,//D 36
  0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,//E 37
  0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,//F 38
  0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,//G 39
  0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,//H 40
  0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//I 41
  0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,//J 42
  0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,//K 43
  0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,//L 44
  0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00,//M 45
  0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,//N 46
  0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,//O 47
  0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,//P 48
  0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00,//Q 49
  0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,//R 50
  0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,//S 51
  0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,//T 52
  0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,//U 53
  0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,//V 54
  0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00,//W 55
  0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,//X 56
  0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,//Y 57
  0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00,//Z 58
  0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00,//[ 59
  0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00,//\ 60
  0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,//] 61
  0x00,0x00,0x04,0x02,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//^ 62
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,//_ 63
  0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//` 64
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20,//a 65
  0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,//b 66
  0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,//c 67
  0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20,//d 68
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00,//e 69
  0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//f 70
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,//g 71
  0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,//h 72
  0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//i 73
  0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,//j 74
  0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00,//k 75
  0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,//l 76
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,//m 77
  0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,//n 78
  0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,//o 79
  0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00,//p 80
  0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80,//q 81
  0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,//r 82
  0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,//s 83
  0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00,//t 84
  0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,//u 85
  0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00,//v 86
  0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,//w 87
  0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00,//x 88
  0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00,//y 89
  0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,//z 90
  0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,//{ 91
  0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,//| 92
  0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00,0x00,0x40,0x40,0x3F,0x00,0x00,0x00,0x00,//} 93
  0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//~ 94
};

unsigned char BMP1[] =
{
	0x00,0x03,0x05,0x09,0x11,0xFF,0x11,0x89,0x05,0xC3,0x00,0xE0,0x00,0xF0,0x00,0xF8,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0xFF,0x11,0xAA,0x44,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x01,0x38,0x44,0x82,0x92,
	0x92,0x74,0x01,0x83,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x44,0xC7,0x01,0x7D,
	0x7D,0x7D,0x7D,0x01,0x7D,0x7D,0x7D,0x7D,0x01,0x7D,0x7D,0x7D,0x7D,0x01,0xFF,0x00,
	0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,
	0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,
	0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x00,0x00,
	0x6D,0x6D,0x6D,0x6D,0x6D,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x40,0x40,
	0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDB,0xDB,0xDB,0xDB,0xDB,0x00,0x00,
	0xDB,0xDB,0xDB,0xDB,0xDB,0x00,0x00,0xDB,0xDB,0xDB,0xDB,0xDB,0x00,0x00,0xDB,0xDB,
	0xDB,0xDB,0xDB,0x00,0x00,0xDA,0xDA,0xDA,0xDA,0xDA,0x00,0x00,0xD8,0xD8,0xD8,0xD8,
	0xD8,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,
	0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x80,
	0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,
	0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x06,0x06,
	0x06,0x06,0x06,0x00,0x00,0x06,0x06,0x06,0xE6,0x66,0x20,0x00,0x06,0x06,0x86,0x06,
	0x06,0x00,0x00,0x06,0x06,0x06,0x06,0x86,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,
	0x00,0x86,0x86,0x86,0x86,0x86,0x80,0x80,0x86,0x86,0x06,0x86,0x86,0xC0,0xC0,0x86,
	0x86,0x86,0x06,0x06,0xD0,0x30,0x76,0x06,0x06,0x06,0x06,0x00,0x00,0x06,0x06,0x06,
	0x06,0x06,0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x06,0x06,0x06,0x06,0x06,
	0x00,0x00,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x1C,0x00,0xFE,0x00,0x01,
	0x02,0x00,0xC4,0x18,0x20,0x02,0x9E,0x63,0xB2,0x0E,0x00,0xFF,0x81,0x81,0xFF,0x00,
	0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0xFF,0x00,0x23,0xEA,0xAA,0xBF,0xAA,
	0xEA,0x03,0x3F,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0C,0x08,0x00,0x00,0x01,0x01,0x01,
	0x01,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x81,0x80,0x80,0x81,0x80,
	0x81,0x80,0x80,0x80,0x80,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
	0x01,0x00,0x01,0x01,0x09,0x0C,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
	0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,
	0x00,0x1E,0x21,0x40,0x40,0x50,0x21,0x5E,0x00,0x1E,0x21,0x40,0x40,0x50,0x21,0x5E,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xC1,0xC1,0xFF,
	0xFF,0xC1,0xC1,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0xFC,0xF3,0xEF,0xF3,0xFC,
	0x80,0xFF,0x80,0xEE,0xEE,0xEE,0xF5,0xFB,0xFF,0x9C,0xBE,0xB6,0xB6,0x88,0xFF,0x00,/*"D:\DreamSpark\OLED\MP3_UI.bmp",0*/
};