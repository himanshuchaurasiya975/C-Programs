#include<stdio.h>
#include<stdlib.h>
void rev(int b[]);
int main()
{
	printf("Function in C to read n number of values in an array and display it in reverse order.\n");
	int a[5],i;
	printf("Enter 5 numbers = ");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	rev(a);
	return 0;
}
void rev(int b[])
{
	int i;
	for(i=4;i>=0;i--)
		printf("%d	 ",b[i]);
}