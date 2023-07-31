#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to copy one string to another string\n");
	char a[30],b[30]={0};
	printf("Enter the string to be copied = ");
	fgets(a,30,stdin);
	int i;
	printf("%s",b);
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	printf("Copied string = %s",b);
	return 0;
}