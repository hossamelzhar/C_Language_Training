
#ifndef _GPIO_H
#define _GPIO_H

typedef unsigned char uint_8;
typedef unsigned int uint_32;


typedef union
{
    struct
    {
        uint_8 pin0 : 1 ;
        uint_8 pin1 : 1 ;
        uint_8 pin2 : 1 ;
        uint_8 pin3 : 1 ;
        uint_8 pin4 : 1 ;
        uint_8 pin5 : 1 ;
        uint_8 pin6 : 1 ;
        uint_8 pin7 : 1 ;
    };
    uint_8 AllPort;
}GPIO_t;

#pragma pack(1)
typedef struct student
{
    struct student *_friend;
    void (*ptr_func)(void);
    uint_32 ID;
    float Degree;
    uint_8 Name[32];
}student;
#pragma pack(1)

void print_gpio_status(GPIO_t *ptr);

void Get_student_data(student *ptr);
void Print_student_data(student *ptr);

#endif // _GPIO_H
