// Accept the 5 elements in array and perform addition (create dynamic array)

#include<stdio.h>
#include<stdlib.h>
int Addition(int Brr[] , int iSize)
{
	int iSum = 0 , iCnt = 0;
	for(iCnt = 0 ; iCnt < iSize ; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	
	return iSum;
}

int main()
{
	int iCnt = 0, iLength = 0 , *Arr = NULL , iRet = 0;
	printf("Enter the number of elements : ");
	scanf("%d",&iLength);
	
	Arr =(int*)malloc(sizeof(int) * iLength);
	
	printf("Enter elements in array : ");
	for(iCnt = 0 ; iCnt <= iLength ; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iRet = Addition(Arr,iLength);
	printf("Addition is %d\n",iRet);
	
	free(Arr);
	return 0;
}