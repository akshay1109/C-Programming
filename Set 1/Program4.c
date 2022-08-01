/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer , Integer
// Output:			-
// Description:		Display 1 to 5 on screen.
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int,int);			//Function declaration

int main()
{
	Display(1,5);		//Function Call
	
	return 0; 		//return successn to os
}

void Display(int iNo1,int iNo2)	//Function defination
{
	int iCnt = 0;
	for(iCnt = iNo1;iCnt <= iNo2;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}