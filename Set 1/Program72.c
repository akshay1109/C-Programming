// Write a program which accept temperature in Fahrenheit and convert it into 
// celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//Input : 10
//Output : -12.2222 (10 - 32) * (5/9)

#include<stdio.h>

double Converter(float fNo)
{
	double dCelsius = 0.0;
	
	dCelsius = (((fNo - 32) * 5)/9);
	return dCelsius;
}

int main()
{
	double dRet = 0.0;
	float fValue = 0.0;
	
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&fValue);
	
	dRet = Converter(fValue);
	printf("%f",dRet);
	
	return 0;
}