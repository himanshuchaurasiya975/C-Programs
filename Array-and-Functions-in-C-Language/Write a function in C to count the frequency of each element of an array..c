#include<stdio.h>
#include<stdlib.h>
void count(int a[]);
int main()
{
	printf("Program to count the frequency of each element in the array\n");
	int a[5],i;
	printf("Enter 5 elements = ");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	count(a);
	return 0;
}
void count(int a[])
{
	int k,i,count=0,count1=0;
	for(k=0;k<=4;k++)
	{
		for(i=0;i<=4;i++)
		{
			if(a[i]==a[k]&&k<=i)
			count++;	
			else if (a[i]==a[k]&&k>i)
				{
					count1++;
					break;
				}
		}
		if(count1==1)
		{
			count1=0;
			//count=0;
			continue;
		}
		else
			{
				printf("Frequnecy of %d is %d\n",a[k],count);
				count=0;
			}
	}
}