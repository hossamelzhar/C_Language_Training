#include <stdio.h>

int main()
{
    int x=5,y=10,z;

    z=++x;
    x=--y;
    printf("%d %d %d \n",z,x,y);

    z=x++;
    //y=z++;
    printf("%d %d %d",z,x,y);

}
