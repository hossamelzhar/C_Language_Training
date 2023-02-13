#include <stdio.h>
#include <stdlib.h>

unsigned char char_1 = 55;
unsigned char char_2;

int main()
{
    printf("Enter a number: ");
    scanf("%d",(unsigned int*)&char_2);
    printf("char_1 = %i , char_2 = %i\n",char_1,char_2);
    char_2++;
    if (char_2 == 67)
        printf("char_2 = %d\n",char_2);
    char_1 = char_1 + char_2;
    printf("char_1 = %d, char_2 = %d\n",char_1,char_2);

    return 0;
}
