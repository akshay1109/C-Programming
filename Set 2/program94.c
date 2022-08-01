// count number id greater than 10

#include<stdio.h>
#include<stdlib.h>
int Count(int Brr[],int iSize)
{
	int iCnt=0 , i = 0;
	for(i=0;i<iSize;i++)
	{
		if(Brr[i] > 10)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iLength=0,*Arr=NULL,iCnt=0,iRet=0;
	printf("Enter number of elements : ");
	scanf("%d",&iLength);

	Arr = (int*)malloc(sizeof(int) * iLength);
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Count(Arr,iLength);
	printf("count number greater than 10 is %d",iRet);
	
	free(Arr);
	return 0;
}