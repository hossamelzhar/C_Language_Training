#include <stdio.h>
#include <stdlib.h>


unsigned short number;
unsigned short length;
unsigned short  start;
unsigned short   stop;
signed short      row;
signed short   column;


int main()
{
    for(;;)
    {
        printf("Enter a Number To Build a Reversed Pyramid : ");
        scanf("%hi",&number);
        fflush(stdin);

        length = 2 * number - 1;


        for(row = (number-1); row >=0; row--)
        {
            start = (length/2) + row;
            stop  = (length/2) - row;
            for(column = (length-1); column>=0; column--)
            {
                if( (column==start) && (column>=stop))
                {
                    printf("*");
                    start = start - 2;
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
