#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	printf("Program to sort the names of cities stored in 2D string\n");
	char a[5][30],t[30]; int i,k,z;
	printf("Enter 5 strings = ");
	for(i=0;i<=4;i++)
		fgets(a[i],30,stdin);
	for(k=0;k<=3;k++)
	{
		for(i=0;a[k][i];i++)
		{
			if(a[k][i]>a[k+1][i])
			{
				for(z=0;a[k][z];z++)
				{	
					t[z]=a[k][z];
					a[k][z]=a[k+1][z];
					a[k+1][z]=a[k][z];
				}
			break;
			}
		}
	}
for(k=0;k<=4;k++)
{	
	for(i=0;a[k][i];i++)
		printf("%s",a[k][i]);
	printf("\n");
}
return 0;
}