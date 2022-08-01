// accept elements of array and another number and check wether 
//this number is present in array or not

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool CheckNumber(int Brr[],int iSize,int iNo)
{
	int iCnt = 0;
	bool bNumber = false;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		if(Brr[iCnt]==iNo)
		{
			bNumber=true;
			break;
		}
	}
	return bNumber;
}

int main()
{
	int *Arr=NULL,iCnt=0,iValue=0,iLength=0;
	bool bRet=false;
	printf("Enter number of elements : ");
	scanf("%d",&iLength);
	
	Arr = (int*)malloc(sizeof(int) * iLength);
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Enter the number which you want to search in array :");
	scanf("%d",&iValue);
	
	bRet = CheckNumber(Arr,iLength,iValue);
	if(bRet == true)
	{
		printf("Number is present.");
	}
	else
	{
		printf("Number is absent.");
	}
	
	free(Arr);
	return 0;
}