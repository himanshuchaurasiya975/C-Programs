#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to print all prime numbers under 100\n");

	for (int i=2;i<=100;i++)
	{
		for (int n=2;n<=i;n++)
			{
				if (i%n==0&&n!=i)
					break;
				else if (i%n==0&&n==i)
					printf("%d ",i);
			}
	}
return 0;
}