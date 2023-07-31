#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to count number of words in a string\n");
	char a[100]; int i,count=0;
	printf("Enter the string = ");
	fgets(a,100,stdin);
	if(a[0]!=10&&a[0]!=32)
		count++;
	for(i=0;a[i];i++)
	{
		if(a[i]==32&&a[i+1]!=10&&a[i+1]>=65&&a[i+1]<=122)
			count++;
	}
	printf("Number of words in string = %d",count);
	return 0;
}