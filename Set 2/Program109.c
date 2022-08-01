// Accept the full name from user and display that name on the console

#include<stdio.h>

int main()
{
	char Arr[20];
	printf("Enter your full name : ");
	scanf("%[^'\n']s",Arr);// space is condsidered , it does not take enter
	
	printf("Your entered name is %s",Arr);
	
	return 0;
}