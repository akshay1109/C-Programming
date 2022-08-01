/////////////////////////////////////////////////////////
//
// Function name:	Pallindrom
// Input:           Integer
// Output:			Boolean
// Description:		(Problem on digits) Accept the number from user and Check given number is pallindrom or not
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool Pallindrom(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	bRet = Pallindrom(iValue); //function call
	if(bRet == true)
	{
		printf("number is pallindrom");
	}
	else
	{
		printf("number is not pallindrom");
	}
	return 0; 
}

bool Pallindrom(int iNo)
{
	int iDigit = 0,iRev = 0,temp = iNo;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	
	if(iRev == temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}