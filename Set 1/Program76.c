//Accept 5 numbers in array and perform addition (use loop for accept the numbers)

#include<stdio.h>

int main()
{
	int iSum = 0, iCnt = 0 , Arr[5];
	
	printf("Enter 5 number in array: ");
	
	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4];
	
	printf("Addition is %d",iSum);
	
	return 0;
}