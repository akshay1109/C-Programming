// Accept one number and check whether is is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

int Divisor(int iNo)
{
	if((iNo % 5) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
 
int main()
{
	int iValue = 0 , iRet = 0;
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Divisor(iValue);
	if(iRet == 0)
	{
		printf("%d is disible of 5",iValue);
	}
	else
	{
		printf("%d is not disible of 5",iValue);
	}
	
	return 0;
}