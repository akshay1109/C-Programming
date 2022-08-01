//Accept 7 numbers in array and perform addition 

#include<stdio.h>

int main()
{
	int Arr[7] , iSum = 0;
	
	Arr[0]=2;
	Arr[1]=2;
	Arr[2]=2;
	Arr[3]=2;
	Arr[4]=2;
	Arr[5]=2;
	Arr[6]=2;
	Arr[7]=2;
	
	iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4] + Arr[5] + Arr[6];
	
	printf("Addition is %d",iSum);
	return 0;
}