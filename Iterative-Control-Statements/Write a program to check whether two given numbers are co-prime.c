#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to check weather given nubmers are co-prime or not\n");
	int val1,val2,i=1,hcf;
	printf("Enter two numbers = ");
	scanf("%d %d",&val1,&val2);
	for (;1;i++)
	{
		if (i%val1==0&&i%val2==0)
			break;
	}
	printf("LCM = %d",i);
	hcf=(val1*val2)/i;
	printf("\nHCF = %d",hcf);
	if (hcf==1)
		printf("\nNumbers are co-prime");
	else
		printf("\nNumbers are not co-prime");
return 0;
}