#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Program to the area of a circle\n");
    int A, R, Pi=3.17;
    printf("Enter the radius of the circle: ");
    scanf("%d",&R);
    A=Pi*R*R;
    printf("\nArea of circle is %d having radius %d",A,R);
    return 0;
}
