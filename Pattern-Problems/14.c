#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern Test 1\n\n");
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||j==i)
			{
				printf("*");
			}
			else if (i==5)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}