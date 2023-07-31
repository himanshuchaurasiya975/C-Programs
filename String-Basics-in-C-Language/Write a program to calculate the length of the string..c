#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to calculate the length of the string without using strlen\n");
	char a[30];
	printf("Enter your name = ");
	fgets(a,30,stdin);
	int count=0;
	for(int i=0;a[i];i++)
		count++;
	printf("The length of the string is = %d",count-1); //Because 1 seat is occupied by linefeed character
	return 0;
}