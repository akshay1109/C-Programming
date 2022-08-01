//Write a program which accept number from user and return the count of digits in 
//between 3 and 7.
//Input : 2395 
//Output : 1


#include<stdio.h>
int Count(int iNo)
{
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit >= 3 && iDigit <= 7)
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
	printf("count frequency of numbers which is between 3 to 7 are %d",iRet);
	
	return 0;
}