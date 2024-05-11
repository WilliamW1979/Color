#pragma once
#ifndef COLOR_WGW
#define COLOR_WGW
#include <Windef.h>

/*

Added color names to make it easier to reference them.

If anyone would like to add on to this, please feel free. The more colors added, the better.

*/

namespace COLOR
{
	COLORREF WHITE = RGB(255, 255, 255);
	COLORREF BLACK = RGB(0, 0, 0);
	COLORREF RED = RGB(255, 0, 0);
	COLORREF LIME = RGB(0, 255, 0);
	COLORREF BLUE = RGB(0, 0, 255);
	COLORREF YELLOW = RGB(255, 255, 0);
	COLORREF CYAN = RGB(0, 255, 255);
	COLORREF AQUA = RGB(0, 255, 255);
	COLORREF MAGENTA = RGB(255, 0, 255);
	COLORREF FUCHSIA = RGB(255, 0, 255);
	COLORREF SILVER = RGB(192, 192, 192);
	COLORREF GRAY = RGB(128, 128, 128);
	COLORREF MAROON = RGB(128, 0, 0);
	COLORREF OLIVE = RGB(128, 128, 0);
	COLORREF GREEN = RGB(0, 128, 0);
	COLORREF PURPLE = RGB(128, 0, 128);
	COLORREF TEAL = RGB(0, 128, 128);
	COLORREF NAVY = RGB(0, 0, 128);
	COLORREF DARKRED = RGB(139, 0, 0);
	COLORREF BROWN = RGB(165, 42, 42);
	COLORREF FIREBRICK = RGB(178, 34, 34);
	COLORREF CRIMSON = RGB(220, 20, 60);
	COLORREF RED = RGB(255, 0, 0);
	COLORREF TOMATO = RGB(255, 99, 71);
	COLORREF CORAL = RGB(255, 127, 80);
	COLORREF INDIANRED = RGB(205, 92, 92);
	COLORREF LIGHTCORAL = RGB(240, 128, 128);
	COLORREF DARKSALMON = RGB(255, 160, 122);
	COLORREF SALMON = RGB(250, 128, 114);
	COLORREF ORANGERED = RGB(255, 69, 0);
	COLORREF DARKORANGE = RGB(255, 140, 0);
	COLORREF ORANGERED = RGB(255, 165, 0);
	COLORREF GOLD = RGB(255, 215, 0);
	COLORREF DARKGOLDENROD = RGB(1844, 134, 11);
	COLORREF GOLDENROD = RGB(218, 65, 32);
	COLORREF PALEGOLDENROD = RGB(238, 232, 170);
	COLORREF DARKKHAKI = RGB(189, 183, 107);
	COLORREF KHAKI = RGB(240, 230, 140);
	COLORREF YELLOWGREEN = RGB(154, 205, 50);
	COLORREF DARKOLIVEGREEN = RGB(85, 107, 47);
	COLORREF OLIVEDRAB = RGB(107, 142, 35);
	COLORREF LAWNGREEN = RGB(124, 252, 0);
	COLORREF CHARTREUSE = RGB(127, 255, 0);
	COLORREF GREENYELLOW = RGB(173, 255, 47);
	COLORREF DARKGREEN = RGB(0, 100, 0);
	COLORREF GREEN = RGB(0, 128, 0);
	COLORREF FORESTGREEN = RGB(34, 139, 34);
	COLORREF LIME = RGB(0, 255, 0);
	COLORREF LIMEGREEN = RGB(144, 238, 144);
	COLORREF PALEGREEN = RGB(152, 251, 152);
	COLORREF DARKSEAGREEN = RGB(143, 188, 143);
	COLORREF MEDIUMSPRINGGREEN = RGB(0, 250, 154);
	COLORREF SPRINGGREEN = RGB(0, 255, 127);
	COLORREF SEAGREEN = RGB(46, 139, 87);
	COLORREF MEDIUMAQUAMARINE = RGB(102, 205, 170);
	COLORREF MEDIUMSEAGREEN = RGB(60, 179, 113);
	COLORREF LIGHTSEAGREEN = RGB(32, 178, 170);
	COLORREF DARKSLATEGRAY = RGB(47, 79, 79);
	COLORREF TEAL = RGB(0, 128, 128);
	COLORREF DARKCYAN = RGB(0, 139, 139);
	COLORREF LIGHTCYAN = RGB(224, 255, 255);
	COLORREF DARKTURQUOISE = RGB(0, 206, 209);
	COLORREF TURQUOISE = RGB(0, 206, 209);
	COLORREF MEDIUMTURQUOISE = RGB(72, 209, 204);
	COLORREF PALETURQUOISE = RGB(175, 238, 238);
	COLORREF AQUAMARINE = RGB(127, 255, 212);
	COLORREF POWDERBLUE = RGB(176, 224, 230);
	COLORREF CADETBLUE = RGB(95, 158, 160);
	COLORREF STEELBLUE = RGB(70, 130, 180);
	COLORREF CORNFLOWERBLUE = RGB(100, 149, 237);
	COLORREF DEEPSKYBLUE = RGB(0, 191, 255);
	COLORREF DODGERBLUE = RGB(30, 144, 255);
	COLORREF LIGHTBLUE = RGB(173, 216, 230);
	COLORREF SKYBLUE = RGB(135, 206, 235);
	COLORREF LIGHTSKYBLUE = RGB(135, 206, 250);
	COLORREF MIGHTNIGHTBLUE = RGB(25, 25, 112);
	COLORREF DARKBLUE = RGB(0, 0, 139);
	COLORREF MEDIUMBLUE = RGB(0, 0, 205);
	COLORREF ROYALBLUE = RGB(65, 105, 225);
	COLORREF BLUEVIOLET = RGB(138, 43, 226);
	COLORREF INDIGO = RGB(75, 0, 130);
	COLORREF DARKSLATEBLUE = RGB(72, 61, 139);
	COLORREF SLATEBLUE = RGB(108, 90, 205);
	COLORREF MEDIUMSLATEBLUE = RGB(123, 104, 238);
	COLORREF MEDIUMPURPLE = RGB(147, 112, 219);
	COLORREF DARKMAGENTA = RGB(139, 0, 139);
	COLORREF DARKVIOLET = RGB(148, 0, 211);
	COLORREF DARKORCHID = RGB(153, 50, 204);
	COLORREF MEDIUMORCHID = RGB(186, 85, 211);
	COLORREF PURPLE = RGB(128, 0, 128);
	COLORREF THISTIE = RGB(216, 191, 216);
	COLORREF PLUM = RGB(221, 160, 221);
	COLORREF VIOLET = RGB(238, 130, 238);
	COLORREF MEDIUMVIOLETRED = RGB(199, 21, 133);
	COLORREF ORCHIF = RGB(215, 112, 214);
	COLORREF PALEVIOLETRED = RGB(219, 112, 147);
	COLORREF DEEPPINK = RGB(255, 20, 147);
	COLORREF HOTPINK = RGB(255, 105, 180);
	COLORREF LIGHTPINK = RGB(255, 182, 193);
	COLORREF PINK = RGB(255, 192, 203);
	COLORREF ANTIQUEPINK = RGB(250, 235, 215);
	COLORREF BEIGE = RGB(245, 245, 220);
	COLORREF BISQUE = RGB(255, 228, 196);
	COLORREF BLANCHEDALMOND = RGB(255, 235, 205);
	COLORREF WHEAT = RGB(245, 222, 179);
	COLORREF CORNSILK = RGB(255, 248, 220);
	COLORREF LEMONCHIFFON = RGB(255, 250, 205);
	COLORREF LIGHTGOLDENRODYELLOW = RGB(250, 250, 210);
	COLORREF LIGHTYELLOW = RGB(255, 255, 224);
	COLORREF SADDLEBROWN = RGB(139, 69, 19);
	COLORREF SIENNA = RGB(160, 82, 45);
	COLORREF CHOCOLATE = RGB(210, 105, 30);
	COLORREF PERU = RGB(205, 133, 63);
	COLORREF SANDYBROWN = RGB(244, 164, 96);
	COLORREF BURLYWOOD = RGB(222, 184, 135);
	COLORREF TAN = RGB(210, 180, 140);
	COLORREF ROSYBROWN = RGB(188, 143, 143);
	COLORREF MOCCASIN = RGB(255, 228, 181);
	COLORREF NAVAJOWHITE = RGB(255, 222, 173);
	COLORREF PEACHPUFF = RGB(255, 218, 185);
	COLORREF MISTYROSE = RGB(255, 228, 225);
	COLORREF LAVENDERBLUSH = RGB(255, 240, 245);
	COLORREF LINEN = RGB(250, 240, 230);
	COLORREF OLDLACE = RGB(253, 245, 230);
	COLORREF PAPAYAWHIP = RGB(255, 239, 213);
	COLORREF SEASHELL = RGB(255, 245, 238);
	COLORREF MINTCREAM = RGB(245, 255, 250);
	COLORREF SLATEGRAY = RGB(112, 128, 144);
	COLORREF LIGHTSLATEGRAY = RGB(119, 136, 153);
	COLORREF LIGHTSTEELBLUE = RGB(176, 196, 222);
	COLORREF LAVENDERBLUE = RGB(230, 230, 250);
	COLORREF FLORALWHITE = RGB(255, 250, 240);
	COLORREF ALICEBLUE = RGB(240, 248, 255);
	COLORREF GHOSTWHITE = RGB(245, 245, 255);
	COLORREF HONEYDEW = RGB(240, 255, 240);
	COLORREF IVORY = RGB(255, 255, 240);
	COLORREF AZURE = RGB(240, 255, 255);
	COLORREF SNOW = RGB(255, 250, 250);
	COLORREF DIMGRAY = RGB(105, 105, 105);
	COLORREF DIMGREY = RGB(105, 105, 105);
	COLORREF GRAY = RGB(128, 128, 128);
	COLORREF GREY = RGB(128, 128, 128);
	COLORREF LIGHTGRAY = RGB(211, 211, 211);
	COLORREF LIGHTGREY = RGB(211, 211, 211);
	COLORREF GAINSBORO = RGB(220, 220, 220);
	COLORREF WHITESMOKE = RGB(245, 245, 245);
}

/*

REFERENCES

http://thegamesmethod.com/wp-content/uploads/2015/04/RGB-Color-Table.pdf


*/

#endif