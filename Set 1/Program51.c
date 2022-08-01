//Write a program which accept number from user and print factors of that 
//number. 
//Input : 24
//Output: 1 2 4 6 8 12 
#include<stdio.h>

void Fact(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Fact(iValue);
	
	return 0;
}