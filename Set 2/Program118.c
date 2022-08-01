// Accept letter from user and check wether it is digit or not
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char ch)
{
	if((ch >= '0') && (ch <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	bool bRet = false;
	char cValue = '\0';
	printf("Enter digit : ");
	scanf("%c",&cValue);
	
	bRet = CheckDigit(cValue);
	if(bRet == true)
	{
		printf("It is a digit.");
	}
	else
	{
		printf("It is not digits.");
	}
	
	return 0;
}