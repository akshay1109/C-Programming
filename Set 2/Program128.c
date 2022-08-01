//accept the string and check wether it is pallindrome or not
#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[20];
	bool bRet = false;
	printf("Enter string: ");
	scanf("%[^'\n']s",Arr);
	
	bRet = CheckPallindrome(Arr);
	if(bRet == true)
	{
		printf("This is Pallindrome.");
	}
	else
	{
		printf("This is not pallindrome.");
	}	
	
	return 0;
}