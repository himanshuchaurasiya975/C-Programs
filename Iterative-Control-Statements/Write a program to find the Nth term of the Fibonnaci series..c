#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("To print the nth term of fibonnaci series\n");
	int n,v1=0,v2=1,v3,i;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	if(n==1)
		printf("%d term is = 0",n);
	else if (n==2)
		printf("%d term is = 1",n);
	else
	{	for(i=3;i<=n;i++)
		{
			v3=v1+v2;
			v1=v2;
			v2=v3;
		
		}
		printf("%d term is = %d",n,v3);
	}
	
	return 0;
}