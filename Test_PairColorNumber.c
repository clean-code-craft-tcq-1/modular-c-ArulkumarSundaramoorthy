/* *************************************************************************
* File Name   :	main.c
* Description : Test pair Number with Color
* Functions	  : 1. GetPairNumberFromColor
*				2. testNumberToPair
* ************************************************************************* */

/* ***************************** Header Files ***************************** */
#include "stdio.h"
#include "assert.h"
#include "main.h"

/* *************************************************************************
* Function Name : testPairToNumber
* Description   : Test Color with pair number
* Arguments	    : 1. major - Major Color
*				  2. minor - Minor Color
*				  3. expectedPairNumber - Expected Pair Number
* Returns		: -
* ************************************************************************* */
void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

/* *************************************************************************
* Function Name : testNumberToPair
* Description   : Test Pair number with color
* Arguments	    : 1. pairNumber - Color Pair Number
*				  2. expectedMajor - Expected Major Color
*				  3. expectedMinor - Expected Minor Color
* Returns		: -
* ************************************************************************* */
void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
