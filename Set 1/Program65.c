// Write a program which accept number from user and return the count of odd 
// digits.
//Input : 2395
//Output : 3


#include<stdio.h>
int CountOdd(int iNo)
{
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) != 0)
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
	
	iRet = CountOdd(iValue);
	printf("count odd numbers from the given number are %d",iRet);
	
	return 0;
}