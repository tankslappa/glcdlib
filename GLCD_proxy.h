/*
$Id$

GLCD_proxy Remote LCD library!

*/

#include <WProgram.h>

#define BLACK					0
#define WHITE					1

#define LCDWIDTH				128
#define LCDHEIGHT				64

class GLCD_proxy {
    byte remoteId;
	void sendLCDMessage(byte length);  
	
public:
    GLCD_proxy(byte nodeId) : remoteId (nodeId) {}

    void begin();
    void backLight(byte level);
    void clearDisplay();
    void clearWhite();
    void clear();
    void display();

    void setPixel   (byte x, byte y, byte color);
    void fillCircle (byte x0, byte y0, byte r, byte color);
    void drawCircle (byte x0, byte y0, byte r, byte color);
    void drawRect   (byte x, byte y, byte w, byte h, byte color);
    void fillRect   (byte x, byte y, byte w, byte h, byte color);
    void drawLine   (byte x0, byte y0, byte x1, byte y1, byte color);
    void drawChar   (byte x, byte line, char c );
    void drawString (byte x, byte line, char *c);
    void drawString_P (byte x, byte line, char *c);
    void drawTriangle (byte x0, byte y0, byte x1, byte y1, byte x2, byte y2, byte color);
    void fillTriangle (byte x0, byte y0, byte x1, byte y1, byte x2, byte y2, byte color);
    void updateDisplayArea(byte x0,byte y0,byte x1,byte y1,byte reset =0);
    void setUpdateArea(byte x0,byte y0,byte x1,byte y1, byte allowReduction =0);

    void drawBitmap (byte x, byte y, const byte *bitmap, byte w, byte h, byte color);
    void drawCharX(byte x, byte y, char c);
    void drawStringX(byte x, byte line, char *c);
    void drawStringX_P(byte x, byte line, char *c);
    void scrollUp(byte y);
    void scrollDown(byte y);
    void scrollLeft(byte x);
    void scrollRight(byte x);
};