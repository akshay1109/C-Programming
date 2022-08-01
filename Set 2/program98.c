// Return smallest number from array accepted by user

#include<stdio.h>
#include<stdlib.h>
int FindSmall(int Brr[],int iSize)
{
	int iMin=0,iCnt=0;
	iMin = Brr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Brr[iCnt] < iMin)
		{
			iMin = Brr[iCnt];
		}
	}
	return iMin;
}

int main()
{
	int *Arr = NULL,iLength=0,iCnt=0,iRet=0;
	printf("Enter number of elements : ");
	scanf("%d",&iLength);
	
	Arr= (int *)malloc(sizeof(int) * iLength);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt);
		scanf("%d",&Arr[iCnt]);
	}	
	
	iRet = FindSmall(Arr,iLength);
	printf("Smallest number is %d",iRet);
	
	free(Arr);
	return 0;
}