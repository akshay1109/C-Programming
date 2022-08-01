/////////////////////////////////////////////////////////
//
// Function name:	CountSum
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and split it into seperate digits.
//					return addition of number of even digits from accepted number.
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSum(int);

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	iRet = CountSum(iValue);
	printf("Sum of even digits in the number is : %d",iRet);
	
	return 0; //return success to OS
}

int CountSum(int iNo)
{
	int iDigit = 0, iSum = 0;
	
	if(iNo < 0)	//Input Updator
	{
		iNo = -iNo;
	}
	if(iNo == 0)	//Input filter
	{
		return 1;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSum;
}
