#include <stdio.h>
#include <string.h>

int main()
{
    char *str="hossam elzhar\n",*chr="sz",*result;
    result=strpbrk(str,chr);
    printf(result);

    //the output is ssam elzhar
}
