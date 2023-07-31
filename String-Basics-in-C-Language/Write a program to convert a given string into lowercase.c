#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to convert a string into the lowercase without using strlwr\n");
	char a[50]; int i;
	printf("Enter a string = ");
	fgets(a,50,stdin);
	for(i=0;a[i];i++)
	{
		if(a[i]==32||a[i]==10)
			continue;
		else if(a[i]>96)
			continue;
		else
			a[i]=a[i]+32;
	}
	printf("\n%s",a);
	return 0;
}