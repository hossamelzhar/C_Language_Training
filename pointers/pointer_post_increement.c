#include <stdio.h>

unsigned int  numbers[5]= {0x11223355, 0xAABBCCDD, 0x55667788, 0xEEFF1122, 0x22446688};
unsigned int  *nums_ptr = NULL;
unsigned int  *ptr      = NULL;


int main()
{
    unsigned short x=0,y=0;
    nums_ptr = numbers;
    ptr = numbers;


    printf("Address of nums_ptr = 0x%X\n",nums_ptr);
    printf("Address of ptr = 0x%X\n",ptr);

    ptr = (nums_ptr++);

    printf("Address of nums_ptr = 0x%X\n",nums_ptr);
    printf("Address of ptr = 0x%X\n",ptr);

    x=5;
    y=7;
    x=(y++); /* x=7 y=8 */
    printf("x = %hi  -  y= %hi \n",x,y);

    x=(++y); /* x=9 y=9 */
    printf("x = %hi  -  y= %hi \n",x,y);

    return 0;
}
