#include<stdio.h>
#include<stdlib.h>
void rotate(int a[], int n, char d);
int main()
{
	printf("Rotate an array by n position in d direction. The d is an indicative value for left or right\n");
	printf("For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29]\n");
	int a[5],n,i; char d;
	printf("Enter 5 numbers = ");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	printf("Enter the value of N for upto how many place you want to rotate the array = ");
	scanf("%d",&n);
	printf("Enter the direction ('L' for left and 'R' for right) = ");
	fflush(stdin); //To empty the buffer from which scanf takes input. So that %c won't get skipped as it will take /n.
	scanf("%c",&d);
	rotate(a,n,d);
	printf("The rotated array is = ");
	for(i=0;i<=4;i++)
		printf("%d ",a[i]);
	return 0;
}
void rotate(int a[], int n, char d)
{
	int temp,i,k;
	if(d=='l'||d=='L')
	{
		for(k=1;k<=n;k++)
		{
			temp=a[0];
			for(i=0;i<=3;i++)	
				a[i]=a[i+1];
			a[4]=temp;
		}
	}
	else if(d=='r'||d=='R')
	{
		for(k=1;k<=n;k++)
		{
			temp=a[4];
			for(i=3;i>=0;i--)
				a[i+1]=a[i];
			a[0]=temp;
		}
	}
}