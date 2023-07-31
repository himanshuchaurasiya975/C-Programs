#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("To print first N fibonnaci number\n");
	int n,v1=0,v2=1,v3=0;
	printf("Enter the number of n = ");
	scanf("%d",&n);
	if (n==1)
		printf("%d",v1);
	else if (n==2)
		printf("%d %d",v1,v2);
	else 
	{	printf("%d %d ",v1,v2);	
		for(int i=3;i<=n;i++)
		{
			v3=v1+v2;
			printf("%d ",v3);
			v1=v2;
			v2=v3;
		}
	}
return 0;
}