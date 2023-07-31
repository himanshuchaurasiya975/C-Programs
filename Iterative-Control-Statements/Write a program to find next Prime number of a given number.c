#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to find the next prime number of the given number\n");
	int a,i,n;
	printf("Enter a number = ");
	scanf("%d",&a);
	for(i=a+1;;i++)
	{
		for (n=2;n<=i;n++)
		{
			if (i%n==0&&i!=n)
				break;
			else if (i%n==0&&i==n)
				break;
		}
		if(i==n)
			break;
	}
	printf("Next Prime Number = %d",i);
	return 0;
}