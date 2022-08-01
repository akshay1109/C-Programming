// Accept number from user and check whether number is even or odd. 

#include<stdio.h>
#include<stdbool.h>

bool EvenOdd(int iNo)
{
	if((iNo % 2) == 0)
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
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = EvenOdd(iValue);
	if(bRet == true)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is Odd");
	}
	
	return 0;
}