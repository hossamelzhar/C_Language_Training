#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* decryptPassword(char* s)
{
    int text_len = 0;
    int index = 0;
    int count = 0;
    int count2 = 0;
    char temp = '-';

    //printf("%s\n", s);

    /*Get string length (s)*/
    //text_len = strlen(s);
    while (s[index] != '\0')
    {
        text_len++;
        index++;
    }
    text_len++; /*one more byte to put NULL Termination */

    /*array to return in it the decrypted password*/
    char* password = (char*) calloc(text_len, sizeof(char));
    /*Another array to edit in it*/
    char  text[text_len];


    index = 0;
    /*copy string (s) to text[] array*/
    strcpy(text, s);

    index = 0;
    while(s[index] != '\0')
    {      /*Arrange Chars If '*' founded and previous char is small and previous of previous is capital*/
           /*and replace '*' with '-' to Remove it at The End*/
        if( (s[index] == '*') && ( ( (s[index-1] >= 'a') && (s[index-1] <= 'z') )
                                 &&( (s[index-2] >= 'A') && (s[index-2] <= 'Z') ) ) )
        {
            temp = text[index-1];
            text[index-1] = text[index-2];
            text[index-2] = temp;
            text[index] = '-';
        }
        /*count Zeros That Can Be Replaced*/
        else if(s[index] == '0')
        {
            if((s[count] >= '1') && (s[count] <= '9'))
            {
                count++;
            }
            else{}
        }

        index++;
    }

    index = 0;
    /*Replace Zeros With Its Opposite Digits if exisist*/
    for(index = (text_len-1); index>=0; index--)
    {
        if( (s[index] == '0') && (count != 0))
        {
            text[index] = text[count2];
            count2++;
            count--;
            text[index] = '-';
        }
        else{}
    }

    count = 0;
    /*copy text array to password array without '-' char*/
    while(text[index] != '\0')
    {
        if(text[index] == '-')
        {
            /* ignore this char '-' */
        }
        else
        {
            password[count] = text[index];
            count++;
        }
        index++;
    }

    password[count] = '\0'; /*Put NULL Termination*/



    return password;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = decryptPassword(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
