// Accept the full name from user and display that name on the console
#include<stdio.h>

int main()
{
	char Arr[30];
	
	printf("Enter your full name : ");
	scanf("%s",Arr); // space is not considerd
	
	printf("You typed name is %s",Arr);
	
	return 0;
}
