
#include "Queue.h"


Queue_T que1;
sint32 value = 0;
uint16 ret   = 0;

int main()
{

    printf("Enter the size of Queue : ");
    scanf("%i", &value);
    Create_Queue(&que1, value);

    for(;;)
    {
        printf("Enter (1) To Enqueue New Element\n");
        printf("Enter (2) To Dequeue The Front Element\n");
        printf("Enter (3) To Display The Queue Elements\n");
        printf("Enter (4) To Know The Number Of Elements\n");
        printf("Enter (5) To Exit The Program\n");
        printf("==============================================\n");
        printf("\n");
        printf("User Input : ");
        scanf("%i", &value);
        switch(value)
        {
        case 1:
            Enqueue(&que1);
            break;

        case 2:
            value = DeQueue(&que1, &ret);
            if(ret == 0)
            {
                printf("Value DeQueue = %i\n", value);
            }
            else
            {

            }
            break;

        case 3:
            Display_Queue(&que1);
            break;

        case 4:
            Queue_Size(&que1);
            break;

        case 5:
            printf("GoodBye :)\n");
            printf("\n");
            Free_Queue(&que1);
            printf("==============================================\n");
            exit(1);
            break;

        default:
            printf("Invalid Input !!!\n");
            break;
        }
        printf("\n");
        printf("Press Enter To Continue..");
        fflush(stdin);
        getchar();
        printf("\n");

    }

    return 0;
}
