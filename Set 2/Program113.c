// write your strlen frunction.
#include<stdio.h>
unsigned int strlenX(char *str)
{
	unsigned int iCnt = 0;
	
	if(str == NULL)
		return 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[50];
	unsigned int iCount;
	
	printf("Enter string: ");
	scanf("%[^'\n']s",Arr);
	
	iCount = strlenX(Arr);
	printf("number of characters in string are %d",iCount);
	
	return 0;
}