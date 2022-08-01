/////////////////////////////////////////////////////////
//
// Function name:	Reverse
// Input:           Integer
// Output:			Integer
// Description:		(Problem on digits) Accept the number from user and reverse that number and return.
// Author:			Akshay Rajendra Bhorde
// Date:			22/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

int Reverse(int);

int main()
{
	int iRet= 0 , iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue); //function call
	printf("Reverse nu7mber is : %d",iRet);
	
	return 0;// return successs to OS
}

int Reverse(int iNo)
{
	int iDigit = 0 , iRev = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	return iRev;
}