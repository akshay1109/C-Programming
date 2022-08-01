// Accept the full name from user and display seperate characters on the new line.
//(write seperate logic function) 
#include<stdio.h>
void Display(char *Brr)
{
	while(*Brr != '\0')
	{
		printf("%c\n",*Brr);
		Brr++;
	}
}

int main()
{
	char Arr[20];
	printf("Enter your full name : ");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	return 0;
}