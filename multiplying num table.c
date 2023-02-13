#include<stdio.h>

void main()
{
    int a,b,r,i,j;

    printf("enter the start num :");
    scanf("%d",&a);
    printf("enter the end num :");
    scanf("%d",&b);




    for(i=a;i<=b;i++){
     for(j=1;j<=12;j++)
      {
        r=j*i;
        printf("%d * %d = %d \n",j,i,r);

      }
      printf("\n\n");
    }

}
