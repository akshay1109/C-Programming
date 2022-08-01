//Input:	4
//Output:	1*	2*	3*	4*	

#include<stdio.h>

void DisplayPattern(int iNo)
{
	register int iCnt = 0 ;//loop counter
	
	for(iCnt = 1; iCnt <= iNo ; iCnt++)
	{
		printf("%d*\t",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number:");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	
	return 0; // return success to OS
}