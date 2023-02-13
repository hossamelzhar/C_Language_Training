#include <stdio.h>
#include <stdlib.h>

#include "calculator.h"

unsigned short operation;
unsigned int    number_1;
unsigned int    number_2;
unsigned int      result;

int main()
{
    for(;;)
    {
        printf("Enter a number:\n 1 for sum\n 2 for sub\n 3 for mul\n 4 for div\n");
        scanf("%hi",&operation);
        fflush(stdin);


        switch(operation)
        {
            case 1 :
                printf("Enter Two Numbers: ");
                scanf("%i %i",&number_1,&number_2);
                result = sum(number_1,number_2);
                printf("The Result = %i\n\n",result);
                break;

            case 2 :
                printf("Enter Two Numbers: ");
                scanf("%i %i",&number_1,&number_2);
                result = sub(number_1,number_2);
                printf("The Result = %i\n\n",result);
                break;

            case 3 :
                printf("Enter Two Numbers: ");
                scanf("%i %i",&number_1,&number_2);
                result = mul(number_1,number_2);
                printf("The Result = %i\n\n",result);
                break;

            case 4 :
                printf("Enter Two Numbers: ");
                scanf("%i %i",&number_1,&number_2);
                result = dev(number_1,number_2);
                printf("The Result = %i\n\n",result);
                break;

            default :
                printf("Invalid input\n\n");
        }
    }

    return 0;
}
