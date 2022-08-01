//Accept the string from user and count the small letters in the string
#include<stdio.h>
int CountSmallLetter(char Brr[])
{
	int iCount=0,i=0;
	while(Brr[i] != '\0')
	{
		if((Brr[i] >= 'a') && (Brr[i] <= 'z'))
		{
			iCount++;
		}
		i++;
	}
	return iCount;
}

int main()
{
	char Arr[20];
	int iRet=0,i;
	printf("Enter string : ");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmallLetter(Arr);
	printf("Number of small letters are %d",iRet);
	
	return 0;
}
 