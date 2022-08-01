/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer
// Output:			-
// Description:		Display 5 times "Marvellous" on the screen
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int);

int main()
{
	Display(5);		//Function call
	
	return 0; 		//success to OS
}

void Display(int iNo)	// Function defination
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("Marvellous\n");
	}
}