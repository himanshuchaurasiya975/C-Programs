#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter time in format HH:MM = ");
    int h, m;
    scanf("%d:%d",&h,&m);
    printf("\n%d Hour and %d Minute",h,m);
    return 0;
}
