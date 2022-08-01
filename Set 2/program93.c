// Accept elements in array and return summation of all odd numbers.

#include<stdio.h>
#include<stdlib.h>
int AddOdd(int Brr[],int iSize)
{
	int iCnt=0 , iSum=0;
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if((Brr[iCnt] % 2) == 1)
		{
			iSum = iSum + Brr[iCnt];
		}
	}
	return iSum;
}

int main()
{
	int iLength=0,*Arr=NULL,iCnt=0,iRet=0;
	printf("Enter number of elements : ");
	scanf("%d",&iLength);
	
	Arr= (int*)malloc(sizeof(int) * iLength);
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = AddOdd(Arr,iLength);
	printf("Addition of odd numbers in array is %d",iRet);
	
	free(Arr);
	return 0;
}