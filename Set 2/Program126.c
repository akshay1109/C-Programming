//accept the string and one letter from user and count frequency of that letter in the string
#include<stdio.h>
int CountFrequency(char *str,char ch)
{
	int iCount = 0;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}

int main()
{
	char Arr[20],cValue='\0';
	int iRet = 0;
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the letter which you want to search : ");
	scanf(" %c",&cValue);
	
	iRet = CountFrequency(Arr,cValue);
	printf("Frequency of %c in string is %d",cValue,iRet);
	
	return 0;
}
