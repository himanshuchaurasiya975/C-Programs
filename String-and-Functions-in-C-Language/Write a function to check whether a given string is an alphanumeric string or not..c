#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to check weather a given string is alphanumeric or not\n");
	char a[30],count=0,count1=0;
	printf("Enter the string = ");
	fgets(a,30,stdin);
	for(int i=0;a[i];i++)
	{
		if(a[i]>=65&&a[i]<=122)
			count++;
		if(a[i]>=48&&a[i]<=57)
			count1++;
	}
	if(count>0&&count1>0)
		printf("The string is alphanumeric");
	else
		printf("The string is not alphanumeric");
	return 0;
}