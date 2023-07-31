#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d,m,y;
    printf("Enter date in format (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&d,&m,&y); //Here "/" will be used as seperator
    printf("Day - %d, Month - %d, Year - %d",d,m,y);
    return 0;
}
