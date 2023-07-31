#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to count the vowels in a given string\n");
	char c[50],count=0;
	printf("Enter a string = ");
	fgets(c,50,stdin);
	for(int i=0;c[i];i++)
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
			count++;
	printf("Number of vowels = %d",count);
	return 0;
}