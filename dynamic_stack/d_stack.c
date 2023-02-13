
#include "d_stack.h"

static Stack_State StackIsFull(Dynamic_Stack *my_stack)
{
    Stack_State ret = FULL;
    if(my_stack->Stack_Pointer == (my_stack->Stack_Size - 1))
    {
        ret = FULL;
    }
    else if((my_stack->Stack_Pointer) == -1)
    {
        ret = EMPTY;
    }
    else
    {
        ret = NOT_FULL;
    }

    return ret;
}

void Stack_Create(Dynamic_Stack *my_stack, uint32 stack_size)
{
    my_stack->Stack_Pool = (sint32*) calloc(stack_size, sizeof(sint32));
    if(NULL == my_stack->Stack_Pool)
    {
        printf("Failed to create stack\n");
    }
    else
    {
        printf("Stack Created successfully\n");
        my_stack->Stack_Size = stack_size;
        my_stack->Stack_Pointer = -1;
        printf("-----------Stack Init---------\n");
    }
}


void Stack_Push(Dynamic_Stack *my_stack, sint32 value)
{
    if((NULL == my_stack) || (FULL == StackIsFull(my_stack)))
    {
        printf("Stack is full or Null, Failed To Push %i\n", value);
    }
    else
    {
        my_stack->Stack_Pointer++;
        my_stack->Stack_Pool[my_stack->Stack_Pointer] = value;
        printf("Value %i Pushed Successfully\n", value);
    }
}


sint32 Stack_Pop(Dynamic_Stack *my_stack)
{
    sint32 value = 0;
    if((NULL == my_stack) || (EMPTY == StackIsFull(my_stack)))
    {
        printf("Stack is Empty or Null\n");
        value = -1;
    }
    else
    {
        value = my_stack->Stack_Pool[my_stack->Stack_Pointer];
        my_stack->Stack_Pool[my_stack->Stack_Pointer] = 0;
        my_stack->Stack_Pointer--;
    }
    return value;
}


sint32 Stack_Top(Dynamic_Stack *my_stack)
{
    sint32 value = 0;
    if((NULL == my_stack) || (EMPTY == StackIsFull(my_stack)))
    {
        printf("Stack is Empty or Null\n");
        value = -1;
    }
    else
    {
        value = my_stack->Stack_Pool[my_stack->Stack_Pointer];
    }
    return value;
}


uint32 Stack_Size(Dynamic_Stack *my_stack)
{
    uint32 num = 0;
    if((NULL == my_stack) || (EMPTY == StackIsFull(my_stack)))
    {
        printf("Stack is Empty or Null\n");
    }
    else
    {
        num = my_stack->Stack_Pointer + 1;
    }
    return num;
}


void Stack_Display(Dynamic_Stack *my_stack)
{
    uint16 index = 0;
    if((NULL == my_stack) || (EMPTY == StackIsFull(my_stack)))
    {
        printf("Stack is Empty or Null\n");
    }
    else
    {
        printf("Stack elements : ");
        for(index = 0; index <= my_stack->Stack_Pointer; index++)
        {
            printf("%i ",my_stack->Stack_Pool[index]);
        }
        printf("\n");
    }
}

void Stack_Free(Dynamic_Stack *my_stack)
{
    free(my_stack);
    printf("Stack is free\n");
}
