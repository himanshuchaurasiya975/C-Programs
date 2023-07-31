#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 5\n\n");
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=9;j++)
		{
			if (j>=6-i&&j<=i+4)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}