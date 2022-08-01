// Return largest number from array accepted by user

#include<stdio.h>
#include<stdlib.h>
int SearchLarge(int Brr[],int iSize)
{
	int iCnt=0, iLarge=0;
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if(iLarge < Brr[iCnt])
		{
			iLarge = Brr[iCnt];
		}
	}
	return iLarge;
}

int main()
{
	int *Arr = NULL,iLength=0,iCnt=0,iRet=0;
	printf("Enter number of elements : ");
	scanf("%d",&iLength);
	
	Arr= (int *)malloc(sizeof(int) * iLength);
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	 
	iRet = SearchLarge(Arr,iLength);
	printf("Largest element is %d",iRet);
	
	free(Arr);
	return 0;// return successful execution message to os
}