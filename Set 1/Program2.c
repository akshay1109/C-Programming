/////////////////////////////////////////////////////////
//
// Function name:	Display
// Input:          	Integer
// Output:			- 
// Description:		Accept number from user and display that number of * on screen.
// Input : 4
// Output : *   *   *   *  
//
//  Input : 2
// 	Output : *   *   
//  Author:			Akshay Rajendra Bhorde
//  Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iValue)
{
	int iCnt= 0;
	for(iCnt = 1; iCnt<= iValue ; iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iNo;			//Local variable
	
	printf("Enter number:\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;			// return success to OS
}