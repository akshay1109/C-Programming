// Write a program which accept distance in kilometre and convert it into meter. (1 
// kilometre = 1000 Meter)
//Input : 5
//Output : 5000
#include<stdio.h>

int Converter(float fKm)
{
	int iMeter = 0;
	
	iMeter = fKm * 1000;
	return iMeter;
}

int main()
{
	float fValue = 0.0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%f",&fValue);
	
	iRet = Converter(fValue);
	printf("%d",iRet);
	
	return 0;
}