#include<stdio.h>
#include<stdlib.h>
int dup(int a[]);
int main()
{
	int a[5],i,s;
	printf("Program to print the first occurance of adjucent duplicate value of input\n");
	printf("Enter 5 numbers = ");
	for (i=0;i<=4;i++)
		scanf("%d",&a[i]);
	s=dup(a);
	if(s>0)
		printf("The first adjucent duplicate value is = %d",a[s]);
	else
		printf("No adjucent duplicate value");
	return 0;
}
int dup(int a[])
{
	int i;
	for(i=0;i<=3;i++)
	{
		if(a[i]==a[i+1])
			return i;
	}
	return -1;
	
}