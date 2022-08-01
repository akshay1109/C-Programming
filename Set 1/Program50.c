// Write a program which accept one number from user and print that number of 
// even numbers on screen. 

#include<stdio.h>

void DisplayEven(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
	{
		printf("%d\n",iCnt*2);
	}
}

// Entry point function
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayEven(iValue);
	
	return 0; // success to OS
}
