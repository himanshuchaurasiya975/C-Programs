#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50],b[256]={0}; int i,d;
	printf("Program to find the repeated character in the string\n");
	printf("Enter the string = ");
	fgets(a,50,stdin);
	for(i=0;a[i];i++)
	{
		if(a[i]==10)
			continue;
		else
		{	
			d=a[i];
			b[d]++;
		}
	}
	printf("\nRepeated characters are = ");
	for(i=0;i<=255;i++)
	{
		if(b[i]>=2)
			printf("%c ",i);
	}
	return 0;

}