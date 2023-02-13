#include <stdio.h>
#include <stdlib.h>

void *my_memset(void *dest, int value, unsigned int len);

int main()
{
    char name[] = "Hossam Elzhar";

    void *ptr = NULL;


    printf("%s\n",name);

    ptr = my_memset(name, '*', 10);

    printf("%s\n",(char*)ptr);

    return 0;
}


void *my_memset(void *dest, int value, unsigned int len)
{
    char *temp = dest;
    if(NULL == dest)
    {
        printf("dest pointer pointing to Null !!!\n");
    }
    else
    {
        while(len--)
        {
            *temp = value;
            temp++;
            // *temp++ = value;  //the above two lines in one line;
        }
    }

    return dest;
}
