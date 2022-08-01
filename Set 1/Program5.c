/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer
// Output:			-
// Description:		Display 5 times # on the screen
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)	// Function defination
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("#\t");
	}
}

int main()
{
	Display(5);		//Function call
	
	return 0; 		//success to OS
}