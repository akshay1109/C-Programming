//Input:	5
//Output:	a	b	c	d	e	

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = '\0';
	
	for(iCnt = 1,ch = 'a' ; iCnt <= iNo ; iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	Display(iValue);//function call
	
	return 0;
}