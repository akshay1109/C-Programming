/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer
// Output:			-
// Description:		Accept the number from user and print 1 to that number on the screen.
//Input : 7
// output : 1   2   3   4   5   6   7
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int);

int main()
{
	int iValue = 0;
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);		//Function call
	
	return 0; 		//success to OS
}

void Display(int iNo)	// Function defination
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt);
	}
}