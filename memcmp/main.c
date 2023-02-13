#include <stdio.h>
#include <stdlib.h>

int my_memcmp(const void *str1, const void *str2, unsigned int len);

int main()
{
    int result = 0;
    char arr1[32]= "Hossam Elzhar Loves Noura Zayed";
    char arr2[32]= "Noura Zayed Loves Hossam Elzhar";
    char arr3[32]= "Noura Zayed Loves Hossam Elzhar";

    result = my_memcmp(arr1, arr2, 31);
    if(0 == result)
    {
        printf("str1 == str2\n");
    }
    else if(result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str2 is less than str1\n");
    }

    result = my_memcmp(arr2, arr3, 31);
    if(0 == result)
    {
        printf("str1 == str2\n");
    }
    else if(result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str2 is less than str1\n");
    }

    result = my_memcmp(arr3, arr1, 31);
    if(0 == result)
    {
        printf("str1 == str2\n");
    }
    else if(result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else
    {
        printf("str2 is less than str1\n");
    }

    return 0;
}


int my_memcmp(const void *str1, const void *str2, unsigned int len)
{
    int value = 0;

    if(NULL == str1 || NULL == str2)
    {
        printf("str1 pointer OR str2 pointer pointing to Null !!!\n");
    }
    else
    {
        while(len--)
        {
            if(*((char*)str1) == *((char*)str2))
            {
                str1 = (char*)str1 + 1;
                str2 = (char*)str2 + 1;
            }
            else if(*((char*)str1) < *((char*)str2))
            {
                value = -1;
                break;
            }
            else
            {
                value = 1;
                break;
            }

        }
    }


    return value;
}
