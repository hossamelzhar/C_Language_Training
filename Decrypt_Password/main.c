#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* decrypt(int len, char* arr);

int main()
{
    char pass[] = "6543210sh*0Hh*0Xx*0ox*0Km*0nk*0";
    char *plaintext = decrypt(sizeof(pass), pass);
    printf("%s\n",plaintext);
    return 0;
}


char* decrypt(int len, char* arr)
{
    int index = 0;
    int count = 0;
    char temp = '-';
    char text[len];

    strcpy(text, arr);
    char* pass = (char*) calloc(len, sizeof(char));

    if(!arr && !pass){}
    else
    {
        while(text[index] != '\0')
        {
            if( (text[index] == '*') && ( ( (text[index-2] >= 'A') && (text[index-2] <= 'Z') )
                                      && ( (text[index-1] >= 'a') && (text[index-1] <= 'z') )  ) )
            {
                temp = text[(index-1)];
                text[(index-1)] = text[(index-2)];
                text[(index-2)] = temp;
                text[index] = '-';
            }
            else{}

            index++;
        }

        index = 0;
        /*Replace Zeros with its opposite digits*/
        for(index = len-1; index>=0; index--)
        {
            if( (text[index] == '0') && ( (text[count] >='1') && (text[count] <='9') ))
            {
                text[index] = text[count];
                text[count] = '-';
                count++;
            }
        }

        index = 0;
        count = 0;
        /*copy text[] to password[] with ignoring char '-'*/
        while(text[index] != '\0')
        {
            if(text[index] == '-')
            {

            }
            else
            {
                pass[count] = text[index];
                count++;
            }
            index++;
        }
       pass[count] = '\0';

    }

    return pass;
}
