#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to sort a string in ascending order\n");
	char a[50]; int i,count=0,k;
	printf("Enter a string = ");
	fgets(a,50,stdin);
	for(i=0;a[i];i++)
	{
		count++;
	}
	count--;
	printf("Count = %d\n",count);
	for(k=1;k<=count-1;k++)
	{
		for(i=0;i<=count-2;i++)
		{
			if(a[i+1]<a[i])
			{
				a[i+1]=a[i+1]+a[i];
				a[i]=a[i+1]-a[i];
				a[i+1]=a[i+1]-a[i];
			}
		}
	}
	printf("Sorted = ");
	for(i=0;a[i];i++) //To print without blank spaces
	{
		if(a[i]!=32)
			printf("%c",a[i]);
	}
	return 0;
}