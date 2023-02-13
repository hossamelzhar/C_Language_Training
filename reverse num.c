#include <stdio.h>

void main()
{
    int n=0,r=0,a=0;

    printf("enter a num to reverse it : ");
    scanf("%d",&n);
    while(n>=1)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;

    }
            printf("the reversed num is %d",r);
            /*  output :
                enter a num to reverse it : 123456
                the reversed num is 654321     */

}
