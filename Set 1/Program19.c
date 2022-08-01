/////////////////////////////////////////////////////////
//
// Function name:	Addition
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and return Summation of seperate digits . 
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int);

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	iRet = Addition(iValue);
	printf("The addition of the digits are : %d",iRet);
	
	return 0; //return success to OS
}

int Addition(int iNo)	// Function call
{
	int iDigit = 0,iSum = 0;
	
	if(iNo < 0)	//Input Updator
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
	}
	
	return iSum;
}