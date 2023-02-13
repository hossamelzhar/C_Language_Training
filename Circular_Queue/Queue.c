#include "Queue.h"





static sint32 QueueIsFull(Queue_T *Que)
{
    uint32 state = 0;
    if(Que->elem_count == Que->max_size)
    {
        state = FULL;
    }
    else if(Que->elem_count == 0)
    {
        state = EMPTY;
    }
    else
    {

    }
    return state;
}

static sint32 Ptr_At_End(Queue_T *Que , sint32 *ptr)
{
    sint32 state = 0;

    if(ptr == ((Que->data) + ((Que->max_size) - 1)))
    {
        state = END;
    }
    else
    {

    }
    return state;
}


void Create_Queue(Queue_T *Que, uint32 Que_size)
{
    sint32 *ptr = NULL;
    if(NULL == Que)
    {
        printf("QUE is NULL\n");
    }
    else
    {
        ptr = (sint32*) calloc(Que_size, sizeof(sint32));
        if(!ptr)
        {
            printf("Failed To create a Queue of size %i elements\n",Que_size);
        }
        else
        {
            Que->data = ptr;
            Que->elem_count = 0;
            Que->max_size = Que_size;
            Que->front_ptr = NULL;
            Que->rear_ptr = NULL;

            printf("Creating The Queue");
            if(Que_size > 20) Que_size = 20;
            while(Que_size--)
            {
                printf(".");
               Sleep(25);
            }
            printf("\n");
            printf("Queue Created Successfully with size of %i elements\n", Que->max_size);
            printf("==============================================\n");
        }
    }
}

void Enqueue(Queue_T *Que)
{
    sint32 value = 0;

    if((NULL == Que) || (FULL == QueueIsFull(Que)))
    {
        printf("Failed To Enqueue, The Queue is FULL OR NULL\n");
    }
    else
    {
        printf("Enter a Number To EnQueue It : ");
        scanf("%i", &value);

        if((NULL == Que->front_ptr) || (NULL == Que->rear_ptr))
        {
            Que->front_ptr = Que->data;
            Que->rear_ptr  = Que->data;
            *(Que->rear_ptr) = value;
            Que->elem_count++;
            printf("Value %i EnQueued Successfully\n",value);
        }
        else if(Ptr_At_End(Que, Que->rear_ptr) == END)
        {
            Que->rear_ptr = Que->data;
            *(Que->rear_ptr) = value;
            Que->elem_count++;
            printf("Value %i EnQueued Successfully\n",value);
        }
        else
        {
            (Que->rear_ptr)++;
            *(Que->rear_ptr) = value;
            Que->elem_count++;
            printf("Value %i EnQueued Successfully\n",value);
        }
    }
}

sint32 DeQueue(Queue_T *Que, uint16 *ret)
{
    sint32 value = 0;
    if((NULL == Que) || (EMPTY == QueueIsFull(Que)))
    {
        printf("Failed To Dequeue, The Queue is EMPTY OR NULL\n");
        *ret = 1;
    }
    else if(Ptr_At_End(Que, Que->front_ptr) == END)
    {
        value = *(Que->front_ptr);
        *(Que->front_ptr) = 0;
        Que->front_ptr = Que->data;
        Que->elem_count--;
        *ret = 0;
    }
    else
    {
        value = *(Que->front_ptr);
        *(Que->front_ptr) = 0;
        (Que->front_ptr)++;
        Que->elem_count--;
        *ret = 0;
    }
    return value;
}

void Display_Queue(Queue_T *Que)
{
    uint16 index = 0;
    if(NULL == Que)
    {
        printf("Failed To Print, The Queue NULL\n");
    }
    else
    {
        printf("Queue Data : ");
        for(index = 0; index<Que->max_size; index++)
        {
            printf("%i ", Que->data[index]);
        }
        printf("\n");
    }
}

void Queue_Size(Queue_T *Que)
{
    if((NULL == Que) || (EMPTY == QueueIsFull(Que)))
    {
        printf("The Queue is EMPTY OR NULL\n");
    }
    else
    {
        printf("The Number Of Queue Elements = %i\n", Que->elem_count);
    }
}

void Free_Queue(Queue_T *Que)
{
    if(NULL == Que)
    {
        printf("The Queue is NULL\n");
    }
    else
    {
        free(Que->data);
        printf("Queue is free\n");
    }
}
