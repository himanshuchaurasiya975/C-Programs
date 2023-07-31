#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	printf("Star Pattern 7\n");
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j<=6-i||j>=i+5)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;	
}