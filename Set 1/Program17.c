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

void Split(int iNo)
{
	int iDigit = 0;
	
	if(iNo < 0)
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

int main()
{
	int iValue = 0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	Split(iValue);
	
	return 0;
} 