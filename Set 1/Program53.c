//Accept one character from user and convert case of that character. 
//Input : a Output : A 
// Input : D Output : d
#include<stdio.h>

char toggle(char cValue)
{
	char cResult = '\0';
	if(cValue >= 65 && cValue <= 97)
	{
		cResult = cValue + 32;
	}
	else if(cValue >= 97 && cValue <= 122)
	{
		cResult = cValue - 32;
	}
}

int main()
{
	char ch = '\0' , cRet = '\0';
	printf("Enter character:");
	scanf("%c",&ch);
	
	cRet = toggle(ch);
	printf("Converted character is: %c",cRet);
	
	return 0;
}