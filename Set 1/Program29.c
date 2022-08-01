// Accept number from user and display the table of that number

#include<stdio.h>

void Display(int);// function declaration

int main()
{
	int iNum = 0;
	
	printf("Enter number:");
	scanf("%d",&iNum);
	
	Display(iNum);
	
	return 0;
}

void Display(int iValue)
{
	int iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	else if(iValue == 0)
	{
		printf("You enter 0.");
		return;
	}
	for(iCnt = 1; iCnt <= 10 ; iCnt++)
	{
		printf("%d * %d = %d\n",iValue,iCnt,iCnt*iValue);
	}
}