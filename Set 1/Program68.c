// Write a program which accept number from user and return difference between 
// summation of even digits and summation of odd digits.
//Input : 2395 
//Output : -15 (2 - 17)


#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0 , iCntEven = 0 , iCntOdd = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	else if(iNo == 0)
	{
		return 0;
	}
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iCntEven = iCntEven + iDigit;			
		}
		else
		{
			iCntOdd = iCntOdd + iDigit;
		}
		iNo = iNo / 10;
	}
	return (iCntEven-iCntOdd);
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	printf("%d",iRet);
	
	return 0;
}