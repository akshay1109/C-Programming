//Input:	iRow = 4
//			iCol = 4

//Output:	$	#	#	#
//			*	$	#	#
//			*	*	$	#
//			*	*	*	$

#include<stdio.h>

void DisplayPattern(int iRow , int iCol)
{
	int i = 0 , j = 0 ;
	
	if(iRow != iCol)
	{
		printf("Rows and columns must be same number.");
		return;
	}
	
	for(i = 0 ; i <= iRow ; i++)
	{
		for(j = 0; j <= iCol ; j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else if(i < j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter number of rows : ");
	scanf("%d",&iValue1);
	printf("Enter number of columns : ");
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1 , iValue2);
	
	return 0;
}