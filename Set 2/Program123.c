//Accept the string from user and count capital and small letters in the string
#include<stdio.h>
void Count(char *str)
{
	int sCount=0,cCount=0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			cCount++;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			sCount++;
		}
		str++;
	}
	printf("Count of capital letters are %d\n",cCount);
	printf("Count of small letters are %d",sCount);
}

int main()
{
	char Arr[20];
	
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	
	return 0;
}