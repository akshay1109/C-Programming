/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer
// Output:			-
// Description:		Accept number from user and Display that number times "Marvellous" on the screen
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
		printf("Marvellous\n");
	}
}