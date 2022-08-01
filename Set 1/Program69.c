// Write a program which accept radius of circle from user and calculate its area. 
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//Input : 5.3 
//Output : 88.2026

#include<stdio.h>

double Area(float fRadius)
{
	double dArea = 0.0f;
	
	dArea = 3.142 * fRadius * fRadius;
	
	return dArea;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter radious of circle:");
	scanf("%f",&fValue);
	
	dRet = Area(fValue);
	printf("Area of a circle is %lf",dRet);
	return 0;
}