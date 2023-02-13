#include <stdio.h>
#include <stdlib.h>

void *my_memcpy(void *dest, const void *src, unsigned int len);

int main()
{

    char name[50] = "Hossam Elzhar Noura Zayed I love You";
    char name_1[50] = "Noura Zayed Hossam Elzhar I love You";

    printf("%s\n",name_1);

    my_memcpy(name_1, name, 50);

    printf("%s\n",name_1);

    return 0;
}


void *my_memcpy(void *dest, const void *src, unsigned int len)
{
    char *temp = dest;
  //  char *temp_1 = src;

    if(NULL == dest || NULL == src)
    {
        printf("dest pointer OR src pointer pointing to Null !!!\n");
    }
    else
    {
        while(len--)
        {
            *temp = *((char*)src);
            temp++;
            src = ((char*)src)+1;

    //  *temp++ = *temp_1++;
        }

    }

    return dest;
}
