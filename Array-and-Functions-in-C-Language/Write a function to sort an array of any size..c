#include<stdio.h>
#include<stdlib.h>
void sort(int a[]);
int main()
{
	printf("Program to sort an array using functions\n");
	int a[5],i;
	printf("Enter 5 numbers = ");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	sort(a);
	printf("The sorted array is = ");
	for(i=0;i<=4;i++)
		printf("%d ",a[i]);
	return 0;
}
void sort(int b[])
{
	int i,k;
	for(k=0;k<=3;k++)
	{
		for(i=0;i<=3;i++)
		{
			if(b[i+1]<b[i])
			{
				b[i+1]=b[i+1]+b[i];
				b[i]=b[i+1]-b[i];
				b[i+1]=b[i+1]-b[i];
			}
		}
	}
}