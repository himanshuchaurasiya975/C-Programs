#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int b[]);
void sort(int a[]);
int main()
{
	printf("Program to merge the 2 arrays arranged in decending order\n");
	int a[5],b[5],i;
	printf("Enter 5 elements of 1st array = ");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	printf("Enter 5 elements of 2nd array = ");
	for(i=0;i<=4;i++)
		scanf("%d",&b[i]);
	merge(a,b);
	return 0;
}
void merge(int a[],int b[])
{
	int c[10],i;
	for(i=0;i<=9;i++)
	{
		if(i<5)
			c[i]=a[i];
		else
			c[i]=b[i-5];
	}
	sort(c);
}
void sort(int c[])
{
	int i,k;
	for(k=0;k<=8;k++)
	{
		for(i=0;i<=8;i++)
		{
			if(c[i+1]>c[i])
			{
				c[i]=c[i]+c[i+1];
				c[i+1]=c[i]-c[i+1];
				c[i]=c[i]-c[i+1];
			}
		}
	}
	printf("Merged and Sorted Array = ");
	for(i=0;i<=9;i++)
		printf("%d ",c[i]);
}