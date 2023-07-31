#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to calculate the frequency of the characters in the string\n");
	char a[50]; int d[256]={0},d1; int i;
	printf("Enter the string = ");
	fgets(a,50,stdin);
	for(i=0;a[i];i++)
	{
		if(a[i]==10)
			continue;
		else
		{
			d1=a[i];
			d[d1]++;
		}
	}	
	for(i=0;i<=255;i++)
	{
		if(d[i]==0)
			continue;
		else
			printf("Frequency of %c is %d\n",i,d[i]);
	}
	return 0;

}