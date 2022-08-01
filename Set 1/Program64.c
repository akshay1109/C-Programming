// Write a program which accept number from user and count frequency of such a 
// digits which are less than 6.
//Input : 2395 
//Output : 3

#include<stdio.h>
int Count(int iNo)
{
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit >= 0 && iDigit < 7)
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
	printf("count frequency of numbers which is less than 6 are %d",iRet);
	
	return 0;
}