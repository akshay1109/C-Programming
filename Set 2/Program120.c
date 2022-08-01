// Accept any alphabetic letter from user and toggle it.
#include<stdio.h>
char Toggle(char ch)
{
	if(ch >= 'A' && ch <='Z')
	{
		return (ch+32);
	}
	else
	{
		return (ch-32);
	}
}

int main()
{
	char cRet = '\0',cValue='\0';
	printf("Enter any alphabetic letter : ");
	scanf("%c",&cValue);
	
	cRet = Toggle(cValue);
	printf("Toggled letter is %c",cRet);
	
	return 0;
}