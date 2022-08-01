// accept the string from user and reverse it.
#include<stdio.h>
char strrevX(char *str)
{
	char *end = NULL;
	char temp = '\0';
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		temp = *str;
		*str = *end;
		*end = temp;
		
		end--;
		str++;
	}
}

int main()
{
	char Arr[20];
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	strrevX(Arr);
	
	printf("Reverse string is %s",Arr);
	return 0;
}