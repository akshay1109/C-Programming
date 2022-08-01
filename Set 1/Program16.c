/////////////////////////////////////////////////////////
//
// Function name:	Factorial
// Input:          	Integer
// Output:			unsigned long int
// Description:		(Problem on digits) Accept the number from user and Calculate factorial (5*4*3*2*1)
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned long int UINT;

UINT Factorial(int iValue)
{
	int iCnt = 0;
	UINT iFact = 1;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt=1 ; iCnt <= iValue ; iCnt++)
	{
		iFact = iFact * iCnt ;
	}
	return iFact;
}

int main()
{
	int iNo = 0;
	UINT iRet = 0;
	
	printf("Enter the number : ");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo);
	printf("Factorial of number is %d",iRet);
	
	return 0;
}