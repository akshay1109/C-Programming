//Input:	3 
//			4
//Output:	*	*	*	*
//			*	*	*	*
//			*	*	*	*

#include<stdio.h>

void Display()
{
	int iRow = 3 , iCol = 4;
	int i = 0 , j = 0;
	
	for(i = 0; i < iRow ; i++)
	{
		for(j = 0; j < iCol ; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	Display();
	return 0;
}