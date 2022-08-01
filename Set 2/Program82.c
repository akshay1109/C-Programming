// .Write a program which accept range from user and return addition of all even 
//numbers in between that range. (Range should contains positive numbers only)
//Input : 23 30 
//Output : 108

#include<stdio.h>
int RangeSum(int iNo1 , int iNo2)
{
	int iCnt = 0 , iSum = 0;
	
	if(iNo1 > iNo2)
	{
		return -1;
	}
	
	if(iNo1 < 0 || iNo2 < 0)
	{
		return -1;
	}
	
	for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
	{
		if((iCnt % 2) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue1 = 0 , iValue2 = 0 , iRet = 0;
	
	printf("Enter starting point : ");
	scanf("%d",&iValue1);
	
	printf("Enter ending point : ");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1,iValue2);
	if(iRet == -1)
	{
		printf("Invalid range");
	}
	else
	{
		printf("Addition is %d", iRet);
	}
	
	return 0;// return OS for successful execution
}