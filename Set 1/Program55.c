// 1.Write a program which accept number from user and display its multiplication of 
// factors.
// Input : 12
// Output : 144 (1 * 2 * 3 * 4 * 6)

#include<stdio.h>

int MultDisplay(int iValue)
{
	auto int iMult = 1;
	register int iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	if(iValue == 0)
	{
		return 0;
	}

	for(iCnt = 2; iCnt <= (iValue/2) ; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			iMult = iMult * iCnt;
		}
	}
	return iMult;
}

int main()
{
	int iNo = 0,iRet = 0;
	
	printf("Enter number:");
	scanf("%d",&iNo);
	
	iRet = MultDisplay(iNo);
	printf("Multiplication factor is %d",iRet);
	
	return 0;
}