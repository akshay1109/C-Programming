//Write a program which accept number from user and check whether it contains 0 
//in it or not.
//
//Input : 2395 
//Output : There is no Zero

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
	int iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit == 0)
		{
			return true;
		}
		iNo = iNo / 10;
	}
	
	return false;
}

int main()
{
	int iValue = 0;
	bool bRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = CheckZero(iValue);
	if(bRet == true)
	{
		printf("There is Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}