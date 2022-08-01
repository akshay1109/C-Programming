//Accept on character from user and check whether that character is vowel 
//(a,e,i,o,u) or not. 
//Input : E Output : TRUE 
//Input : d Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

int checkVowel(char ch)
{
	if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	char cValue = '\0' ;
	int iRet = 0;
	printf("Enter character:");
	scanf("%c",&cValue);
	
	iRet = checkVowel(cValue);
	if(iRet == 1)
	{
	printf("It is a vowel");
	}
	else
	{
		printf("It is not a vowel");
	}
	return 0;
}



