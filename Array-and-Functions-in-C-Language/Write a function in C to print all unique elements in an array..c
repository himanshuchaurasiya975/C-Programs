#include<stdio.h>
#include<stdlib.h>
void unique(int b[]);
int main()
{
	printf("Program to print all the unique numbers of the array\n");
	int a[10],i;
	printf("Enter 10 numbers = ");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	unique(a);
	return 0;
}
void unique(int b[])
{
	int k,i;
	printf("Unique elements = ");
	for(k=0;k<=9;k++)
	{
		for(i=0;i<=9;i++)
		{
			if(i==k)
				continue;
			else if(b[k]==b[i])
				break;
			else if(i==9)
				break;
				
		}
		if(b[k]==b[i])
			continue;
		else
			printf("%d ",b[k]);
	}
}