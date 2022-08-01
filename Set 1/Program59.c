// Write a program which accept number from user and return difference between 
// summation of all its factors and non factors.

// Input : 12
// Output : -34 (16 - 50)

#include<stdio.h>

int Difference(int iNo)
{
	register int iCnt = 0;
	auto int iFact = 0 , iNonFact = 0 , iDiff= 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo == 0)
	{
		return 0;
	}
	
	for(iCnt = 1 ; iCnt < iNo ; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			iNonFact = iNonFact + iCnt;
		}
		else
		{
			iFact = iFact + iCnt;
		}
	}
	
	iDiff = iFact - iNonFact;
	
	return iDiff;
}

int main()
{
	auto int iValue = 0 , iRet = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet = Difference(iValue);
	printf("Difference is %d",iRet);
	
	return 0;
}