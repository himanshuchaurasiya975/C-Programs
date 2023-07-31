#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Star Pattern 19\n\n");
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=19;j++)
		{
			if((j>=4-i&&j<=6+i)||(j>=4-i+10&&j<=6+i+10))
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
	}
	printf("******Himanshu*****\n");
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=18;j++)
		{
			if(j>=i+1&&j<=10-i+9)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}