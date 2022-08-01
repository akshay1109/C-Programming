// Accept the full name from user and display that name on the console.
//(write seperate logic function) 
#include<stdio.h>
void Display(char Brr[])
{
	printf("Your typed name is %s",Brr);
}

int main()
{
	char Arr[20];
	printf("Enter your full name : ");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}

