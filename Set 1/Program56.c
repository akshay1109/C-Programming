// Write a program which accept number from user and display its factors in 
// decreasing order.
// Input : 12
// Output : 6 4 3 2 1

#include<stdio.h>

void Display(int iNo)
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
	
	for(iCnt = (iNo/2) ; iCnt > 0 ; iCnt--)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	auto int iValue = 0;
	printf("Enter the number: ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}