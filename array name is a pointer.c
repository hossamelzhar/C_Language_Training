#include<stdio.h>

int main()
{
    int i;
    char j[10];
    int* n=NULL;

    printf("the mem loc add of i is : %x\n",&i);
    printf("the mem loc add of j is : %x\n",j);

    if(n)printf("n is not null");
    if(!n)printf("n is null");

    return 0;
}
