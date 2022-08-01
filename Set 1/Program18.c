/////////////////////////////////////////////////////////
//
// Function name:	Split
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and split it into seperate digits
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

// Function declaration
void Split(int);

// Entry point
int main()
{
	int iValue = 0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	Split(iValue);	//Function Call
	
	return 0;
} 

// Function Defination
void Split(int iNo)
{
	int iDigit = 0;
	
	if(iNo < 0)	// Input Updater
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d \n",iDigit);
		iNo = iNo / 10;
	}
}