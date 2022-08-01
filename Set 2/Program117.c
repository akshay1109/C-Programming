// Accept letter from user and check wether it is capital or not
#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{
	if((ch >= 'a') && (ch <='z'))
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
	printf("Enter character : ");
	scanf("%c",&cValue);
	
	bRet = CheckSmall(cValue);
	if(bRet == true)
	{
		printf("It is small letter.");
	}
	else
	{
		printf("It is not small letter.");
	}
	
	return 0;
}