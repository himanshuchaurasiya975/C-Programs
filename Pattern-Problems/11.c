#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 11\n\n");
	int i,j; char k;
	for (i=1;i<=5;i++)
	{
		k=65;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=i+4)
			{
				printf("%c",k);
				if(j<5)
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