/////////////////////////////////////////////////////////
//
// Function name:	CountEven
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and split it into seperate digits.
//					count number of even digits from accepted number.
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int);

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Total number of even digits in the number are : %d",iRet);
	
	return 0; //return success to OS
}

int CountEven(int iNo)
{
	int iDigit = 0,iCnt = 0;
	
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
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
