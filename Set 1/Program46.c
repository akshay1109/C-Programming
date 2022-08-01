//Accept one number from user and print that number of * on screen. (use while loop)

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0 || iNo == 0)
	{
		print("Wrong input.");
		return;
	}
	
	while(iNo != 0)
	{
		printf("*\t");
		iNo--;
	}
}

int main()
{
	int iValue = 0 ;
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}