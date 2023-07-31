#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to convert the given string into uppercase without using strupr\n");	
	char a[50];
	printf("Enter a string = ");
	fgets(a,50,stdin);
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]==10||a[i]==32)
			continue;
		else if(a[i]<96)
			continue;
		else
			a[i]=a[i]-32;
	}
	printf("\n");
	printf("%s",a);
	return 0;
}