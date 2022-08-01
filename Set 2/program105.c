// accept elements of array and another number and 
//return the last occurence of that number
#include<stdio.h>
#include<stdlib.h>

int CheckLastOccurence(int Brr[],int iSize,int iNo)
{
	int iCnt = 0,iPos=-1;
	
	for(iCnt=0;iCnt <iSize;iCnt++)
	{
		if(Brr[iCnt] == iNo)
		{
			iPos = iCnt;
		}
	}
	return iPos;
}

int main()
{
	int *Arr=NULL,iLength=0,iCnt=0,iValue=0,iRet=0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	Arr = (int *)malloc(sizeof(int) * iLength);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Enter number which find in array : ");
	scanf("%d",&iValue);
	
	iRet= CheckLastOccurence(Arr,iLength,iValue);
	if(iRet != -1)
	{
		printf("Last occurence of number is there on index : %d\n",iRet);
	}
	else
	{
		printf("Number is not there");
	}	
	
	free(Arr);
	return 0;
}