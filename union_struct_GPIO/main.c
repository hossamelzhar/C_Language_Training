/**
**********************************************************************************************************
* @Project Name         : Union_Struct_GPIO_Padding_Packing.c                                            *
* @Author Name          : Hossam Masoud Elzhar                                                           *
* @Created Date         : 13/09/2022                                                                     *
* @Program Description  : Using Union with Struct to interface GPIO REG Bits & Struct Examples           *
**********************************************************************************************************
*/

/* preprocessor directives Section */
#include <stdio.h>
#include <stdlib.h>

#include "GPIO.h"

/* Global Declaration Section */
void Func_ACK (void);


int main()
{
    GPIO_t gpio_1;

    gpio_1.AllPort = 0x55;

    print_gpio_status(&gpio_1);

    printf("-------------------------------------------\n");

    student Hossam, hassan;

    Get_student_data(&Hossam);
    Get_student_data(&hassan);

    Hossam._friend = &hassan;
    hassan._friend = &Hossam;

    Hossam.ptr_func = Func_ACK;
    hassan.ptr_func = Func_ACK;

    printf("-------------------------------------------\n");
    Print_student_data(&Hossam);
    printf("-------------------------------------------\n");
    Print_student_data(&hassan);

    printf("-------------------------------------------\n");
    printf("Size Of Hossam Object = %i\n", sizeof(Hossam));


    return 0;
}


/* Sub-Function Section */
void Func_ACK (void)
{
    printf("The Function performed well\n");
}
