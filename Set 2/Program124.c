//Accept the string from user and count spaces in the string
#include<stdio.h>
int SpaceCount(char *str)
{
	int iCount = 0;
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	printf("Enter String :");
	scanf("%[^'\n']s",Arr);
	
	iRet = SpaceCount(Arr);
	printf("Number of spaces in string are %d",iRet);
	
	return 0;
}