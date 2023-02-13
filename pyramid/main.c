#include <stdio.h>
#include <stdlib.h>

unsigned short number;
unsigned short length;
unsigned short  start;
unsigned short   stop;
unsigned short    row;
unsigned short column;

int main()
{
    for(;;)
    {
        printf("Enter a Number To Build a Pyramid : ");
        scanf("%hi",&number);

        length = 2 * number - 1;

        for(row=0; row<number; row++)
        {
            start = (length/2) - row;
            stop  = (length/2) + row;
            for(column=0; column<length; column++)
            {
                if( (column==start) && (column<=stop))
                {
                    printf("*");
                        start += 2;
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
