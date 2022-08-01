//Accept 5 numbers in array and perform addition 

#include<stdio.h>

int main()
{
	int iSum = 0, Arr[5];
	
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 40;
	Arr[4] = 50;
	
	iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4];
	
	printf("Sum of Array elements are %d",iSum);
	return 0;
}