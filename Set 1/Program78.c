//Accept 5 numbers in array and perform addition (use loop for accept the numbers and addition of numbers)

#include<stdio.h>

int main()
{
	int iCnt = 0 ,Arr[5] ,iSum = 0;

	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		printf("Enter %d number in array : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	
	printf("Addition is %d",iSum);
	
	return 0;
}
