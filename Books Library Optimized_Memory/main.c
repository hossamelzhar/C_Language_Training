#include <stdio.h>
#include <stdlib.h>


unsigned short *Number_Of_Books = NULL;
unsigned short **Shelves = NULL;



int main()
{
    unsigned short Number_Of_Shelves = 0;
    unsigned short Number_Of_Queries = 0;
    unsigned short     Type_Of_Query = 0;
    unsigned short x                 = 0;
    unsigned short y                 = 0;
    unsigned short index             = 0;

    for(;;)
    {
        printf("Enter Number Of Shelves : ");
        scanf("%hu", &Number_Of_Shelves);

        Shelves = (unsigned short**) calloc(Number_Of_Shelves, sizeof(short *));

       /****
        for(index = 0; index < Number_Of_Shelves; index++)
        {
            *(Shelves+index)= NULL;

            *(Shelves+index)= (unsigned short*) calloc(1, sizeof(short));

        }
        ****/

        Number_Of_Books = (unsigned short*) calloc(Number_Of_Shelves, sizeof(short));

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
                    printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves - 1));
                    Number_Of_Queries++;
                }
                else
                {
                    if(NULL == (*(Shelves + x)))
                    {
                        *(Shelves + x) = (unsigned short*) calloc(1, sizeof(short));
                        *(Number_Of_Books + x) += 1;
                    }
                    else
                    {
                        *(Number_Of_Books + x) += 1;
                        *(Shelves + x) = (unsigned short*) realloc(*(Shelves + x), (*(Number_Of_Books + x)) * sizeof(short));
                    }

                    printf("Enter The Number's Book Pages : ");
                    scanf("%hu", &y);

                    *(*(Shelves + x) + (*(Number_Of_Books + x) - 1)) = y;

                }

            }
            else if(2 == Type_Of_Query)
            {
                printf("Enter The Shelf Number : ");
                scanf("%hu", &x);
                
                if(NULL == (*(Shelves + x)))
                {
                   printf("No Books In This Shelf...\n");
                }
				else
				{
					if(x >= Number_Of_Shelves)
		            {
		                printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves-1));
		                Number_Of_Queries++;
		            }
		            else
		            {
		                printf("Enter The Book Number : ");
		                scanf("%hu", &y);
		                printf("%hu\n",*(*(Shelves + x) + y));
		            }
				}
            }
            else if(3 == Type_Of_Query)
            {
                printf("Enter The Shelf Number : ");
                scanf("%hu", &x);
                
                if(NULL == (*(Shelves + x)))
                {
                	printf("0\n");
                }
                else
                {
                	if(x >= Number_Of_Shelves)
		            {
		                printf("Ooh Wait, Our Shelves are from 0 To %hu\n",(Number_Of_Shelves-1));
		                Number_Of_Queries++;
		            }
		            else
		            {
		                printf("%hu\n",*(Number_Of_Books + x));
		            }
                }
                
            }
            else
            {
                printf("Invalid Type !!!\n");
                Number_Of_Queries++; //This Query Uncomplete
            }


            printf("\n");

        }

        printf("-----------------------------------\n");


       for(index = 0; index < Number_Of_Shelves; index++)
       {
       //     printf("Shelves 2D %hu %p !!!!!\n", index, *(Shelves+index));
            free(*(Shelves+index));
       //     printf("Shelves 2D %hu %p Released !!!!!\n", index, *(Shelves+index));
       }


        free(Shelves);

        free(Number_Of_Books);

        printf("-----------------------------------\n");
    }




    return 0;
}
