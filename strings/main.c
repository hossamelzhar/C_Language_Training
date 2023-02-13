#include <stdio.h>
#include <stdlib.h>

char *str = "hossam masoud";


int main()
{
    printf("str = %s\n",str);//Using pointer name returns the all str value;
    printf("str = %c\n",*str);//Using (*str) returns the first char in str;
    printf("str = 0x%X\n",str);//This returns the actual string Address (the first char address)
    printf("str = %c\n",*(str+1));//Using (*str+1) returns the second char in str;
    printf("str = 0x%X\n",(str+1));//This returns the second char address
    printf("str = 0x%X\n",&str);//This returns the pointer Address (Address of actual string Address)

    printf("------------------------------\n");

    str="hh";
    printf("str = %s\n",str);
    printf("str = 0x%X\n",str);

    printf("------------------------------\n");

    str="zzzzzzzz";
    printf("str = %s\n",str);
    printf("str = 0x%X\n",str);

    printf("------------------------------\n");

    printf("value of address 0x406044 = %s\n",0x406044);
    printf("value of address 0x406093 = %s\n",0x406093);
    printf("value of address 0x406096 = %s\n",0x406096);

    printf("------------------------------\n");

    /*
    *(str+2) = 'x';
    printf("str = %s\n",str); // program crashed
    */

    str = "x";
    printf("str = %s\n",str); /* program run well */

    return 0;
}
