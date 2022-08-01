// Write a program which accept number from user and return summation of all its 
// non factors.
// Input : 12
// Output : 50

#include<stdio.h>

int SumNonFact(int iNo)
{
	register int iCnt = 0;
	auto int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo == 0)
	{
		return 0;
	}
	for(iCnt = 2 ; iCnt < iNo ; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0 , iRet = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	printf("%d",iRet);
	
	return 0;
}