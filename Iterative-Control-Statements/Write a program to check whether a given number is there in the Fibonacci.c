#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to check weather the number exist in Fibonnaci series or not\n");
	int n,v1=0,v2=1,v3;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	if(n==0)
		printf("Number exist in Fibonnaci series\n");
	else if (n==1)
		printf("Number exist in Fibonnaci series\n");
	else
{
	for (;1;)
	{
		v3=v1+v2;
		v1=v2;
		v2=v3;
		if(v3==n)
		{	
			printf("Number exist in Fibonnaci series");
			break;
		}
		else if(v3>n)
		{
			printf("Number does not exist in Fibonnaci series\n");
			break;
		}

	}
}
return 0;
}