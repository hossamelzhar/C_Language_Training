#include<stdio.h>

int main()
{

    int size ,i , j,min,n;
    printf("enter a num to show a pattern of it : ");
    scanf("%d",&n);
    size = 2*n-1;


    for(i=0;i<size;i++)
        {
        for(j=0;j<size;j++)
         {
             min = i < j ? i : j;
             min=(min<size-i)?min:size-i-1;
             min=(min<size-j)?min:size-j-1;
             printf("%d",n-min);

         }
         printf("\n");
        }
        return 0;
}
