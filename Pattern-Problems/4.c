#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 4\n\n");
	for (int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}