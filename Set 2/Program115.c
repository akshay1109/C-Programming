// Make ascii table 
#include<stdio.h>

int main()
{
	int i = 0;
	
	printf("Decimal\tHexadecimal\tOctal\tChar\n");
	for(i=0;i<=127;i++)
	{
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
	
	return 0;
}
