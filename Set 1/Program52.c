//Write a program which accept number from user and print even factors of that 
//number. 
// Input : 36
// Output: 2 6 12 18
#include<stdio.h>

void EvenFact(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			if((iCnt % 2) == 0)
			{
				printf("%d\t",iCnt);
			}
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	EvenFact(iValue);
	
	return 0;
}