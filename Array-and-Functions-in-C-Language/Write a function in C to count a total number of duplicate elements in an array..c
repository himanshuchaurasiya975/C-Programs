#include<stdio.h>
#include<stdlib.h>
int count(int b[]);
int main()
{
	printf("Program to find the total number of duplicate elements in an array\n");
	int a[10],i,s;
	printf("Enter 10 numbers = ");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	s=count(a);
	printf("The total number of duplicate elements = %d",s);
	return 0;
}
int count(int b[])
{
	int i,k,count=0;
	for(k=0;k<=9;k++)
	{
		for(i=0;i<=9;i++)
		{
			if(k==i)
				continue;
			else if(b[k]==b[i])
				count++;
		}
	}
	return count/2;
}