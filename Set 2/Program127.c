//accept the string and check wether it is pallindrome or not
#include<stdio.h>
#include<stdbool.h>

bool Palliendrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool flag = true;
	
	start = str;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if(*start != *end)
		{
			flag = false;
			break;
		}
		start++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[20];
	bool bRet = false;
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	bRet = Palliendrome(Arr);
	if(bRet == true)
	{
		printf("String is pallindrome.");
	}
	else
	{
		printf("String is not pallindrome.");
	}
	
	return 0;
}
