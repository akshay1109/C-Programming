/////////////////////////////////////////////////////////
//
// Function name:	Factorial
// Input:           Integer
// Output:			Integer
// Description:		Accept the number from user and Calculate factorial of a number.(4*3*2*1)
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

int Factorial(int iNo)
{
	int iFact = 1,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("Factorial is %d",iRet);
	
	return 0;			//return succes to os		
}
