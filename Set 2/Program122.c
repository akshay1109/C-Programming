//Accept the string from user and count capital letters in the string
#include<stdio.h>
int CapitalCount(char *str)
{
	int iCount=0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
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
	
	iRet = CapitalCount(Arr);
	printf("Capital letters count are %d",iRet);
	
	return 0;
}