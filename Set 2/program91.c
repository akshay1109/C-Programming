// Accept elements in array and find the average of elements
#include<stdio.h>
#include<stdlib.h>
float Average(int Brr[] , int iSize)
{
	int iCnt=0 , iSum = 0;
	float fAvg = 0.0;
	
	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	
	fAvg = iSum / iSize;
	
	return fAvg;
}

int main()
{
	int *Arr = NULL,iLength = 0,iCnt=0;
	float fRet=0;
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	Arr = (int*)malloc(sizeof(int) * iLength);
	for(iCnt = 0 ; iCnt < iLength ; iCnt++)
	{
		printf("Enter element %d: ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	fRet = Average(Arr,iLength);
	printf("Average of numbers are : %f",fRet);
	
	free(Arr);
	return 0;
}
