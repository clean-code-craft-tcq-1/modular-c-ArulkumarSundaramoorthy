/* *************************************************************************
* File Name   :	main.h
* Description : Telecommunication Cable Color Test
* Functions	  :
* ************************************************************************* */
#ifndef MAIN_H
#define MAIN_H

/* ******************************* Defines ******************************* */
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#define MAX_COLORPAIR_NAME_CHARS 16

/* ***************************** Prototypes ***************************** */
ColorPair GetColorFromPairNumber(int pairNumber);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
void ColorCodingPrint(void);
	
#endif
