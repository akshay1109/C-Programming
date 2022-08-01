//Write a program which accept range from user and display all numbers in between 
//that range.
//Input : 23 35 
//Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//Input : -10 2
//Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
//Input : 90 18
//Output : Invalid range

#include<stdio.h>
void DisplayRange(int iNo1 , int iNo2)
{
	int iCnt = 0;
	
	if(iNo1 > iNo2)
	{
		printf("Invalid range");
		return;
	}

	for(iCnt = iNo1; iCnt <= iNo2 ; iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter starting point : ");
	scanf("%d",&iValue1);
	
	printf("Enter ending point : ");
	scanf("%d",&iValue2);
	
	DisplayRange(iValue1,iValue2);
	
	return 0;// return OS for successful execution
}