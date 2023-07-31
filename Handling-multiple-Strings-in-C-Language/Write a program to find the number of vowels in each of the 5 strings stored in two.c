#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to find the total number of vowerls in multiple strings\n");
	char a[5][30]; int i,k,count=0;
	printf("Enter 5 strings = ");
	for(i=0;i<=4;i++)
		fgets(a[i],30,stdin);
	for(k=0;k<=4;k++)
	{
		for(i=0;a[k][i];i++)
		{
			if(a[k][i]=='a'||a[k][i]=='e'||a[k][i]=='i'||a[k][i]=='o'||a[k][i]=='u')
				count++;
		}
	}
	printf("Total number of vowels = %d",count);
	return 0;
}