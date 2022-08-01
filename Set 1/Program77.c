//Accept 5 numbers in array, perform addition and take sum statement in 5 lines 

#include<stdio.h>

int main()
{
	int iCnt = 0 , iSum = 0 , Arr[5];
	
	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		printf("Enter %d number in array:",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	iSum = iSum + Arr[0];
	iSum = iSum + Arr[1];
	iSum = iSum + Arr[2];
	iSum = iSum + Arr[3];
	iSum = iSum + Arr[4];
	
	printf("Addition is %d",iSum);
	
	return 0;
}