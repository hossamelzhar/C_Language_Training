#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short length=0;
    unsigned short height=0;
    unsigned short      x=0;
    unsigned short      y=0;
    unsigned short  midel=0;

    for(;;)
    {
        fflush(stdin);
        //printf("Enter the length : ");
        //scanf("%hi",&length);
        fflush(stdin);
        printf("Enter the height : ");
        scanf("%hi",&height);
        //printf("%c %c\n",length,height);

    /*
    for(y=1;y<=height;y++)
    {
        for(x=1;x<=length;x++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    /*
    for(y=1;y<=height;y++)
    {
        for(x=1;x<=length;x++)
        {
            if( (y==1) || (y==height) )
            {
                printf("* ");
            }
            else if( (x==1) || (x==length) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    */
    /*
    length=1;
    for(y=1;y<=height;y++)
    {
        for(x=1;x<=length;x++)
        {
            printf("* ");
        }
        printf("\n");
        length++;
    }
    */

    /*
    length=height;
    for(y=1;y<=height;y++)
    {
        for(x=1;x<=length;x++)
        {
            printf("* ");
        }
        printf("\n");
        length--;
    }
    */

    /*
    length=height;
    for(y=1;y<=height;y++)
    {
        for(x=1;x<=length;x++)
        {
            if( (y==1) || (y==height) )
            {
                printf("* ");
            }
            else if( (x==1) || (x==length) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        length--;
    }
    */
    /*
    //pyramid
    length = 2*height-1;
    midel  = length/2;
    for(y=0; y<height; y++)
    {

        for(x=0; x<length; x++)
        {
            if( ((x==midel-y) || (x==midel+y)) && (y!=height-1) )
            {
                printf("*");
            }
           else if( (y==height-1) )
            {
                if(x%2==1) continue;
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    */
    //180 rotated pyramid
    length = 2*height-1;
    midel  = length/2;
    for(y=height; y>0; y--)
    {

        for(x=length; x>0; x--)
        {
            if( ((x==midel+y) || (x==midel-y+2))&& (y!=height) )
            {
                printf("*");
            }
           else if( (y==height) )
            {
                if(x%2==0) continue;
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    }




    return 0;
}
