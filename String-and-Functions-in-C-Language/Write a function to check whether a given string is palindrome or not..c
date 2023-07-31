#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to check weather a string is palindrom or not\n");
	char a[30],b[30]={0}; int temp,count=0;
	fgets(a,30,stdin);
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]==10)
			continue;
		else
			b[i]=a[i];
		count++;
	}
	printf("%d\n",count);
	for(i=0;i<=count/2-1;i++)
	{
		temp=b[i];
		b[i]=b[count-1-i]; //BECAUSE THE STRING IS STORED FORM 0. BUT COUNTING IS DONE FROM 1.
		b[count-1-i]=temp;
	}
	printf("Reversed = \n%s",b);
	for(i=0;i<count;i++)
	{
		if(a[i]!=b[i])
		{
			printf("\nThe strings is not palindrom");
			return 0;
		}
	}
	printf("\nThe string is palindrom");
	return 0;
}