// Write a program which accept width & height of rectangle from user and calculate 
// its area. (Area = Width * Height)
//Input : 5.3 9.78
//Output : 51.834

#include<stdio.h>

double Area(float fwidth , float fheight)
{
	double dArea = 0.0;
	dArea = fwidth * fheight;
	return dArea;
}

int main()
{
	float fValue1 = 0.0, fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter Width of rectangle : ");
	scanf("%f",&fValue1);

	printf("Enter height of rectangle : ");
	scanf("%f",&fValue2);
	
	dRet = Area(fValue1,fValue2);
	printf("Area of rectangle is %lf",dRet);
	
	return 0;
}