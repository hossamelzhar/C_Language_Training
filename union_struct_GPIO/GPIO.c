#include <stdio.h>
#include <string.h>
#include "GPIO.h"


void print_gpio_status(GPIO_t *ptr)
{
    printf("All Port Value = 0x%X\n",ptr->AllPort);
    printf("pin0 Value = %i\n",ptr->pin0);
    printf("pin1 Value = %i\n",ptr->pin1);
    printf("pin2 Value = %i\n",ptr->pin2);
    printf("pin3 Value = %i\n",ptr->pin3);
    printf("pin4 Value = %i\n",ptr->pin4);
    printf("pin5 Value = %i\n",ptr->pin5);
    printf("pin6 Value = %i\n",ptr->pin6);
    printf("pin7 Value = %i\n",ptr->pin7);
}


void Get_student_data(student *ptr)
{
    printf("Enter Student Name : ");
    gets((char*)(ptr->Name));
    printf("Enter Student ID : ");
    scanf("%i",&(ptr->ID));
    printf("Enter Student Degree : ");
    scanf("%f",&(ptr->Degree));
    fflush(stdin);

}
void Print_student_data(student *ptr)
{
    printf("Student Name              : %s\n"   , ptr->Name);
    printf("Student ID                : %i\n"   , ptr->ID);
    printf("Student Degree            : %0.2f\n", ptr->Degree);
    printf("Student's Friend Name     : %s\n"   , ptr->_friend->Name);
    printf("Student's Friend ID       : %i\n"   , ptr->_friend->ID);
    printf("Student's Friend Degree   : %.2f\n"   , ptr->_friend->Degree);
    ptr->ptr_func();
}
