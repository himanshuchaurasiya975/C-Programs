#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to check weather a number is armstrong number or not\n");
	int n,a,b,s=0;
	printf("Enter a number = ");
	scanf("%d",&n);
	a=n;
	for(;n!=0;)
	{ 
		b=n%10;
		n=n/10;
		s=s+(b*b*b);
	}
	if(s==a)
		printf("This is an Armstrong number\n");	
	else
		printf("Not an Armstrong number\n");
return 0;
}