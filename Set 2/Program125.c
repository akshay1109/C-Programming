//accept the string from user and count vowels in the string
#include<stdio.h>
int VowelCount(char *str)
{
	int iCount = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') 
			|| (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
			{
				iCount++;
			}
		str++;
	}
	return iCount;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	iRet = VowelCount(Arr);
	printf("Number of vowels in string is %d",iRet);
}

