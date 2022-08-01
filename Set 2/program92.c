// Accept elements in array and return the count of even numbers

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Brr[],int iSize)
{
	int i = 0 , iEven=0;
	for(i=0;i<iSize;i++)
	{
		if((Brr[i] % 2) == 0)
		{
			iEven++;
		}
	}
	return iEven;
}

int main()
{
	int iLength = 0 , iRet = 0 , *Arr=NULL , iCnt=0;
	
	printf("Enter number of elements : ");
	scanf("%d",&iLength);
	
	Arr = (int*)malloc(sizeof(int) * iLength);
	for(iCnt = 0;iCnt< iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = CountEven(Arr,iLength);
	printf("Number of even elements in array are %d",iRet);
	
	free(Arr);
	return 0;
}