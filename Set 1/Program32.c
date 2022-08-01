//Input:	5
//Output:	2	4	6	8	10

#include<stdio.h>

void Display(int iNo1,int iNo2)
{
	register int iCnt = 0; // loop counter
	
	if(iNo1 < 0 || iNo2 < 0 || iNo1 == 0 || iNo2 == 0)
	{
		printf("Input is not valid.");
		return;
	}
	
	for(iCnt = 1 ; iCnt <= iNo2 ; iCnt++)
	{	
		printf("%d\t",iNo1*iCnt);
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter number 1:");
	scanf("%d",&iValue1);
	printf("Enter number 2:");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}