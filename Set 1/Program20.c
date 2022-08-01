/////////////////////////////////////////////////////////
//
// Function name:	Count
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and split it into seperate digits.
//					Count number of digits from accepted number
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int);

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	printf("Total number of digits in the number are : %d",iRet);
	
	return 0; //return success to OS
}

int Count(int iNo)
{
	int iDigit = 0,iCnt = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iCnt++;
		iNo = iNo / 10;
	}
	
	return iCnt;
}