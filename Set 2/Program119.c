// Accept small letter from user and convert it into capital letter
#include<stdio.h>
char SmallToCapital(char ch)
{
	if((ch >='a') && (ch <= 'z'))
	{
		return (ch-32);
	}
}

int main()
{
	char cVal = '\0',cRet;
	printf("Enter small letter : ");
	scanf("%c",&cVal);
	
	cRet = SmallToCapital(cVal);
	printf("capital letter is %c",cRet);
	
	return 0;
}

