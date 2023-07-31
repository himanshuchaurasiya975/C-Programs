#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to reverse a string without using strrev\n");			
	char a[50];
	printf("Enter a string = ");
	fgets(a,50,stdin);
	int i,count=0,temp;
	for(i=0;a[i];i++)
	{
		count++;
	}
	count--;
	for(i=0;i<=count/2;i++)
	{
		temp=a[i];
		a[i]=a[count-i];
		a[count-i]=temp;
	}
	printf("%s",a);
	return 0;
}