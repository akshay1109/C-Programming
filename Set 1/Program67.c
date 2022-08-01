// Write a program which accept number from user and return multiplication of all 
// digits.
//Input : 2395 
//Output : 270

#include<stdio.h>

int Multiplication(int iNo)
{
	int iDigit = 0 , iMult = 1;
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
		if(iDigit != 0)
		{
			iMult = iMult * iDigit;
		}
		iNo = iNo / 10;
	}
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Multiplication(iValue);
	printf("Multiplication are %d",iRet);
	
	return 0;
}