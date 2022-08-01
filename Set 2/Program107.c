#include<stdio.h>

int main()
{
	char Arr[]="Beautiful";
	
	printf("%s\n",&Arr[3]);
	printf("%s\n",&Arr[0]);
	printf("%s\n",&Arr[8]);
	
	printf("%s\n",Arr);
	printf("%s\n",Arr+3);
	printf("%s\n",Arr+5);
	
	return 0;
}