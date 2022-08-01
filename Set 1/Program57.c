// Write a program which accept number from user and display all its non factors.
// Input : 12
// Output : 5 7 8 9 10 11

#include<stdio.h>

void DisplayNonFact(int iNo)
{
	register int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(iNo == 0)
	{
		return 0;
	}
	for(iCnt = 2 ; iCnt < iNo ; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	DisplayNonFact(iValue);
	
	return 0;
}