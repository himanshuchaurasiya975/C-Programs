#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 9\n\n");
	int i,j,k;
	for (i=1;i<=4;i++)
	{
		k=1;
		for (j=1;j<=7;j++)
		{
			if(j>=i&&j<=8-i)
			{
				printf("%d",k);
				if(j<4)
					k++;
				else
					k--;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}