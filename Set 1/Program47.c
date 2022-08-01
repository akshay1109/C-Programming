// Accept on number from user if number is less than 10 then print 
// “Hello” otherwise print “Demo”.

#include<stdio.h>

int Poll(int iNo)
{
	if(iNo < 10)
	{
		return 0;
	}
else if(iNo < 20)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}

int main()
{
	int iValue = 0 , iRet = 0;
	printf("Enter number between 0-20 : ");
	scanf("%d",&iValue);
	
	iRet = Poll(iValue);
	if(iRet == 0)
	{
		printf("Hello");
	}
	else if(iRet == 1)
	{
		printf("Demo");
	}
	else
	{
		printf("You not enter the number between the given range");
	}
	
	return 0;
}