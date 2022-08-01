// Accept the number from user and retun the power of that number

#include<stdio.h.>
int Power(int iNo1, int iNo2)
{
	register int iCnt = 0;
	auto iPow = 1;
	 
	if(iNo2 == 0)
	{
		return 1;
	}
	else if(iNo1 == 0)
	{
		return -1;
	}
	
	else if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	else if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	
	for(iCnt = 1 ; iCnt <= iNo2 ; iCnt++)
	{
		iPow = iNo1 * iPow;
	}
	return iPow;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter first number:");
	scanf("%d",&iValue1);
	
	printf("Enter second number i.e. power number:");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue2);
	printf("Result = %d",iRet);
	printf("  (If result gives you -1 then your answer is infinity)");
	
	
	return 0;
}
