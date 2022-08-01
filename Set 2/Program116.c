// Accept letter from user and check wether it is capital or not
#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char ch)
{
	if((ch >= 'A') && (ch <='Z'))
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
	char cValue='\0';
	bool bRet = false;

	printf("Enter character : ");
	scanf("%c",&cValue);
	
	bRet = CheckCapital(cValue);
	if(bRet == true)
	{
		printf("It is capital letter.");
	}
	else
	{
		printf("It is not capital letter.");
	}
	
	return 0;
}
