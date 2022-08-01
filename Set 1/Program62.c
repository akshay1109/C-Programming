// Write a program which accept number from user and count frequency of 2 in it.
//Input : 2395 
//Output : 1

#include<stdio.h>
int Count(int iNo)
{
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 2)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	printf("count frequency of 2 is %d",iRet);
	
	return 0;
}