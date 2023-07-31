#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to count the occurance of the given character in the string\n");
	char a[100],b; int i,count=0;
	printf("Enter any string = \n");
	fgets(a,100,stdin);
	printf("Enter the character whose occurance has to be checked = ");
	scanf("%c",&b);
	for(i=0;a[i];i++)
	{
		if(a[i]==b)
			count++;
	}
	printf("Occuance of '%c' character = %d",b,count);
	return 0;
}