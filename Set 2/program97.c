// Return difference between minimum and maximum number from array accepted by user

#include<stdio.h>
#include<stdlib.h>

int Difference(int Brr[],int iSize)
{
	int iMin = Brr[0] , iMax = Brr[0] , iDiff = 0 , iCnt = 0;
	for(iCnt=1;iCnt<iSize;iCnt++)
	{
		if(Brr[iCnt] < iMin)
		{
			iMin = Brr[iCnt];
		}
		else if(Brr[iCnt] > iMax)
		{
			iMax = Brr[iCnt];
		} 
	}
	printf("iMax = %d , iMin = %d\n",iMax,iMin);
	iDiff = iMax - iMin; 
	return iDiff;
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
	 
	iRet = Difference(Arr,iLength);
	printf("difference between minimum and maximum number is %d",iRet);

	free(Arr);
	return 0;// return successful execution message to os
}