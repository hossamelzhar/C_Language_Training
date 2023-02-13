#include <stdio.h>
#include <stdlib.h>

double my_pow(double number, int exp);

int main()
{
    double number   = 0;
    int    exponent = 0;
    double result   = 0;

    for(;;)
    {
        printf("Enter a Number : ");
        scanf("%lf",&number);
        printf("Enter Exponent : ");
        scanf("%i",&exponent);
        result = my_pow(number, exponent);
        printf("Result = %lf\n\n",result);
    }

    return 0;
}

double my_pow(double number, int exp)
{
    double result = number;
    int index =0;

    if(1 == number || 0 == exp)
    {
        result = 1;
    }
    else if(exp > 0)
    {
        for(index = 1; index < exp; index++)
        {
            result *= number;
        }
    }
    else
    {
        for(index = 0; index >= exp; index--)
        {
            result /= number;
        }

    }


    return result;
}
