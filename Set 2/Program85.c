//  Accept number from user and display below pattern.
//Input : 5
//Output : A B C D E

#include<stdio.h>
void DisplayChar(int iNo)
{
	int iCnt = 0;
	char ch = '\0';
	
	for(iCnt = 1,ch='A' ; iCnt <= iNo ; iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	DisplayChar(iValue);
	return 0;
}