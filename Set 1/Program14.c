/////////////////////////////////////////////////////////
//
// Function name:	Summation
// Input:          	Integer
// Output:			-
// Description:		Accept the number from user and	perform addition from that number to 1.
//					Apply filter or updator if requires
// Input : 			5
// Output : 		15	(5+4+3+2+1)
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0,iSum=0;
	
	if(iNo<0)						//Input Updator
	{
		iNo = -iNo;
	}
	for(iCnt=1 ; iCnt <=iNo ; iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iValue = 0,iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	printf("Addition is %d",iRet);
	
	return 0;			//return succes to os		
}
