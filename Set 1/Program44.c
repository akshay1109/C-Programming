// Program to divide two numbers

#include<stdio.h>

float Division(float fNo1 , float fNo2)
{
	float fDiv = 0;
	
	if(fNo1 == 0)
	{
		return 0.0;
	}
	else if(fNo2 == 0)
	{
		return -1;
	}
	
	fDiv = fNo1 / fNo2;
	
	return fDiv;
}

int main()
{
	float fValue1 = 0 , fValue2 = 0; 
	float fRet = 0;
	printf("Enter first number : ");
	scanf("%d",&fValue1);
	
	printf("Enter second number : ");
	scanf("%d",&fValue2);
	
	fRet = Division(fValue1 , fValue2);
	printf("Division is %f (When your answer is -1 so your answer is infinity.)",fRet);
	
	return 0;
}