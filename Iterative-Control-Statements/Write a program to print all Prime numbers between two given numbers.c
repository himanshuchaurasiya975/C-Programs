#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to print the prime numbers between two given numbers\n");
	int a,b,i;
	printf("Enter two numbers = ");
	scanf("%d %d",&a,&b);
	for (i=a;i<=b;i++)
	{
		for (int n=2;n<=i;n++)
		{
			if(i%n==0&&n!=i)
				break;
			else if (i%n==0&&n==i)
				printf("%d ",i);
		}
	}
return 0;
}