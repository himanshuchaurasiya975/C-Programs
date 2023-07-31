#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to print all Armstrong numbers below 1000\n");
	int i,s=0,n,t;
	for (i=0;i<=1000;i++)
	{
		n=i;
		s=0;
		for(;n!=0;)
		{
			t=n%10;
			n=n/10;
			s=s+(t*t*t);
		}
		if(s==i)
			printf("%d ",i);
	}
return 0;
}