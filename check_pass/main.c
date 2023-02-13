#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned char pass[5]={'h','o','s','s','9'};
unsigned char user_pass[5];

int main()
{
    unsigned short index = 0;
    unsigned short pass_flag = 0;
    unsigned short trial = 0;

    while (trial < 3)
    {
        printf("please enter password: ");
        /*
        for(index=0; index<5; index++)
        {
            scanf("%c",&user_pass[index]);
            fflush(stdin);
        }
        */
        gets(user_pass);

        for(index=0; index<5; index++)
        {
            if(user_pass[index] != pass[index])
            {
                pass_flag = 1;
                break;
            }
        }

        printf("please wait:\n");
        for(index=0; index<30; index++)
        {

            printf(".");
            Sleep(100);
        }

        printf("\n");

        if(1 == pass_flag)
        {
            printf("Invalid password !!!\n");
            pass_flag = 0;
        }
        else
        {
            printf("Welcome\n");
            break;
        }
    }



    return 0;
}
