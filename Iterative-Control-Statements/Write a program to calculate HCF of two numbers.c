#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Program to calculate the HCF of two numbers\n");
	int value1, value2,i=1;
	printf("Enter two numbers = ");
	scanf("%d %d",&value1,&value2);
	//We'll first find the LCM of the two numbers.
	for(;1;i++)
	{
		if(i%value1==0&&i%value2==0)
			break;
	}
	printf("LCM = %d",i);
	//Now code for HCF
	//value1*value2 = LCM * HCF
	//HCF = (value1*value2)/LCM
	printf("\nHCF = %d",(value1*value2)/i);

	return 0;
}