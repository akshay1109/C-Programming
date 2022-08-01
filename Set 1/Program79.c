// Accept 5 numbers in array and perform addition (use loop for accept the numbers and addition of numbers)
// write seperate function for addition

#include<stdio.h>

int Addition(int Brr[])
{
	int iCnt = 0 , iSum = 0;
	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	
	return iSum ;
}

int main()
{
	int iCnt = 0 , Arr[5] , iRet = 0;
	
	for(iCnt = 0 ; iCnt < 5 ; iCnt++)
	{
		printf("Enter %d number in array : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Addition(Arr);
	printf("Addition is %d",iRet);
	
	return 0;
}