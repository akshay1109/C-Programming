/////////////////////////////////////////////////////////
//
// Function name:	DisplayRev
// Input:          	Integer
// Output:			-
// Description:		Accept the number from user and print reverse numbers from that number to 1.
// Input : 7
// Output : 7   6   5   4   3   2   1
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayRev(int);

int main()
{
	int iNo = 0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	DisplayRev(iNo);	//function call
	
	return 0;		//return success to OS
}

void DisplayRev(int iValue)
{
	int iCnt = 0;
	for(iCnt = iValue; iCnt > 0; iCnt--)
	{
		printf("%d\t",iCnt);
	}
}