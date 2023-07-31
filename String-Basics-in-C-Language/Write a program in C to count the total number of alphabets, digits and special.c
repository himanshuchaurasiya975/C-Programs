#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to print the total number of alphabets, digits and special characters in a string\n");
	int i, count=0,count1=0, count2=0; char a[50];
	printf("Enter a string that includes alphabets, digits and special characters = ");
	fgets(a,50,stdin);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65&&a[i]<=122)
			count++;
		else if(a[i]>=48&&a[i]<=57)
			count1++;
		else
			count2++;
	}
	printf("Number of alphabets = %d\n", count);
	printf("Number of digits = %d\n",count1);
	printf("Number of special characters = %d",count2-1); //Because that breakline which is added auto. by fgets is also added
	return 0;
}