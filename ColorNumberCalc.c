/* *************************************************************************
* File Name   :	Test_PairNumber.c
* Description : Test Color with Pair Number
* Functions	  : 1. GetColorFromPairNumber
*				2. testPairToNumber
* ************************************************************************* */

/* ***************************** Header Files ***************************** */
#include "main.h"

/* ******************************* Variables ******************************* */
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


/* *************************************************************************
* Function Name : ColorPairToString
* Description   : Major Color & Minor Color Pair names as a string
* Arguments	    : 1. colorPair - Color Pair(Major, Minor) structure
*				  2. buffer - Color pair string
* Returns		: -
* ************************************************************************* */
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/* *************************************************************************
* Function Name : GetColorFromPairNumber
* Description   : Get Major & Minor Color from Pair Number
* Arguments	    : pairNumber - Color Pair Number
* Returns		: colorPair - Color Pair(Major, Minor) Structure
* ************************************************************************* */
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/* *************************************************************************
* Function Name : GetPairNumberFromColor
* Description   : Get Pair Number from Colors
* Arguments	    : colorPair - Color Pair(Major, Minor) Structure
* Returns		: Color Pair Number
* ************************************************************************* */
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

/* *************************************************************************
* Function Name : ColorCodingPrint
* Description   : Print the Color code for reference
* Arguments	    : -
* Returns		: -
* ************************************************************************* */
void ColorCodingPrint(void) {
	
	printf("Color Code Colors Name");
	for(int i=0; i<numberOfMajorColors; i++)
	{
		for(int j=0; j<numberOfMinorColors; j++)
		{			
			printf("%02d         %s-%s",i+j,MajorColorNames[i],MinorColorNames[j]);
		}
	}
}
