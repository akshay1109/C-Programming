// Accept number fro user and check whether it is perfect number or not.
#include<stdio.h>
#include<stdbool.h>

bool Perfect(int iNo)
{
	auto int iSum = 0;
	register int iCnt =0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt<iNo ; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	bRet = Perfect(iValue);
	if(bRet == true)
	{
		printf("It is perfect number.");
	}
	else
	{
		printf("It is not perfect number.");
	}
	
	return 0;
}