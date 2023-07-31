#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 13\n\n");
	int i,j;char k;
	for (i=1;i<=7;i++)
	{
		k=65;
		for(j=1;j<=13;j++)
		{
			if(j<=8-i||j>=i+6)
			{
				printf("%c",k);
				if(j<7)
					k++;
				else
					k--;
			}
			else
			{
				printf(" ");
				if(j<7)
					k++;
				else
					k--;

			}
		}
		printf("\n");

	}
return 0;
}
