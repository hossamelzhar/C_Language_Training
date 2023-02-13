#include<stdio.h>

void main()
{
    int a,b;
    printf("enter two nums to swap them : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping : %d %d",a,b);

}
