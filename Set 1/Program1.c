/////////////////////////////////////////////////////////
//
// Function name:	Addition
// Input:          	Integer , Integer
// Output:			Integer
// Description:		Addition of 2 numbers
// Author:			Akshay Rajendra Bhorde
// Date:			10/12/2021	
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

int Addition(int iValue1			//IN
			 ,int iValue2			//IN
			)
{
	int iSum = 0;
	iSum = iValue1 + iValue2;
	return iSum;
}

int main()
{
	int iNo1 = 0,iNo2 = 0,iRet = 0;		//Local variables
	
	printf("Enter first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter second number:\n");
	scanf("%d",&iNo2);
	
	iRet = Addition(iNo1,iNo2);			//Function call
	printf("Addition is : %d",iRet);
	return 0;							//return success to OS
}
