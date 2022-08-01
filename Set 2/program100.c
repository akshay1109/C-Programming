// Check whether 11 is present in array or not
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
bool CheckNumber(int Brr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if(Brr[iCnt] == 11)
		{
			break;
		}
	}
	if(iCnt == iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	bool bRet = false;
	int *Arr=NULL,iCnt=0,iLength=0;
	
	printf("Enter number of elements: ");
	scanf("%d",&iLength);
	
	Arr = (int*)malloc(sizeof(int) * iLength);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}	
	
	bRet = CheckNumber(Arr,iLength);
	if(bRet == true)
	{
		printf("11 is present in array.");
	}
	else
	{
		printf("11 is absent in array.");
	}

	free(Arr);
	return 0;
}

