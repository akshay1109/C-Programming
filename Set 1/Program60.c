// .Write a program which accept number from user and display its digits in reverse  order.
// Input : 2395 
// Output : 5	9	3	2
#include<stdio.h>

void Reverse(int iNo)
{
	int iRev = 0;

	while(iNo > 0)
	{
		iRev = iNo % 10;
		printf("%d\t",iRev);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number : ");
	scanf("&d",&iValue);
	
	Reverse(iValue);
	
	return 0;
}