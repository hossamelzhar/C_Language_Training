#include <stdio.h>
#include <stdlib.h>



unsigned short (*shelves)[1100] = NULL;

void Set_Memory(void *dest, int value, unsigned int len);



int main()
{
    unsigned short Number_Of_Shelves = 0;
    unsigned short Number_Of_Queries = 0;
    unsigned short     Type_Of_Query = 0;
    unsigned short x                 = 0;
    unsigned short y                 = 0;


   for(;;)
   {
        printf("Enter Number Of Shelves : ");
        scanf("%hu", &Number_Of_Shelves);

        shelves = malloc((Number_Of_Shelves  * 1100) * sizeof(short));
        Set_Memory(shelves, 0, (Number_Of_Shelves  * 1100)); //Set Shelves Elements To Zero
        unsigned short   arr[Number_Of_Shelves];
        Set_Memory(arr, 0, Number_Of_Shelves); //Set Array Elements To Zero


        printf("Enter Number Of Queries : ");
        scanf("%hu", &Number_Of_Queries);
        printf("\n");
        while(Number_Of_Queries--)
        {
            printf("Enter Type Of Query : ");
            scanf("%hu", &Type_Of_Query);
            if(1 == Type_Of_Query)
            {

                printf("Enter The Shelf Number : ");
                scanf("%hu", &x);

                if(x >= Number_Of_Shelves)
                {
                    printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves-1));
                    Number_Of_Queries++;
                }
                else
                {
                    printf("Enter The Number's Book Pages : ");
                    scanf("%hu", &y);

                    *(*(shelves + x) + arr[x]) = y;
                    arr[x]++;
                    }

            }
            else if(2 == Type_Of_Query)
            {
                printf("Enter The Shelf Number : ");
                scanf("%hu", &x);

                if(x >= Number_Of_Shelves)
                {
                    printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves-1));
                    Number_Of_Queries++;
                }
                else
                {
                    printf("Enter The Book Number : ");
                    scanf("%hu", &y);

                    printf("%hu\n",(*(*(shelves + x) + y)));
                }
            }
            else if(3 == Type_Of_Query)
            {
                printf("Enter The Shelf Number : ");
                scanf("%hu", &x);
                if(x >= Number_Of_Shelves)
                {
                    printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves-1));
                    Number_Of_Queries++;
                }
                else
                {
                    printf("%hu\n",arr[x]);
                }
            }
            else
            {
                printf("Invalid Type !!!\n");
                Number_Of_Queries++; //This Query Uncomplete
            }


            printf("\n");

        }

    free(shelves);

    printf("-----------------------------------\n");

   }

    return 0;
}



void Set_Memory(void *dest, int value, unsigned int len)
{
    unsigned short *temp = dest;
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
}
