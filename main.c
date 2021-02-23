/* *************************************************************************
* File Name   :	main.c
* Description : Telecommunication Cable Color Test
* Functions	  :
* ************************************************************************* */

/* ***************************** Header Files ***************************** */
#include "stdio.h"
#include "assert.h"
#include "main.h"

/* *************************************************************************
* Function Name : main
* Description   : Main function to test Color pair
* Arguments	    : -
* Returns		: -
* ************************************************************************* */
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    ColorCodingPrint();

    return 0;
}
