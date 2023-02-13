#include "stack.h"

static Return_State stack_FULL(stack_t *my_stack)
{
    Return_State ret = R_NOK;
    if(NULL == my_stack)
    {
        ret = R_NOK;
    }
    else
    {
        if((my_stack->stack_pointer) == (STACK_POOL_MAX - 1))
        {
            ret = STACK_FULL;
        }
        else if((my_stack->stack_pointer) == STACK_POOL_EMPTY)
        {
            ret = STACK_EMPTY;
        }
        else
        {
            ret = STACK_NOT_FULL;
        }
    }
    return ret;
}


Return_State stack_init(stack_t *my_stack)
{
    Return_State ret = R_NOK;
    uint16 index = 0;
    if(NULL == my_stack)
    {
        ret = R_NOK;
    }
    else
    {
        my_stack->stack_pointer = -1;
        for(index = 0; index < (STACK_POOL_MAX-1); index++)
        {
            my_stack->stack_pool[index] = 0;
        }
        ret = R_OK;
    }
    return ret;
}


Return_State stack_push(stack_t *my_stack, uint32 value)
{
    Return_State ret = R_NOK;
    if(NULL == my_stack || (STACK_FULL == stack_FULL(my_stack)))
    {
        ret = R_NOK;
    }
    else
    {
        my_stack->stack_pointer++;
        my_stack->stack_pool[my_stack->stack_pointer] = value;
        ret = R_OK;
    }
    return ret;
}
Return_State stack_pop(stack_t *my_stack, uint32 *value)
{
    Return_State ret = R_NOK;
    if((NULL == my_stack) || (NULL == value) || (STACK_EMPTY == stack_FULL(my_stack)))
    {
        ret = R_NOK;
    }
    else
    {

        *value = my_stack->stack_pool[my_stack->stack_pointer];
        my_stack->stack_pool[my_stack->stack_pointer] = 0;
        my_stack->stack_pointer--;
        ret = R_OK;
    }
    return ret;
}


Return_State stack_top(stack_t *my_stack, uint32 *value)
{
    Return_State ret = R_NOK;
    if((NULL == my_stack) || (NULL == value) || (STACK_EMPTY == stack_FULL(my_stack)))
    {
        ret = R_NOK;
    }
    else
    {
        *value = my_stack->stack_pool[my_stack->stack_pointer];
        ret = R_OK;
    }
    return ret;
}


Return_State stack_display(stack_t *my_stack)
{
    Return_State ret = R_NOK;
    uint16 index = 0;
    if(NULL == my_stack || (STACK_EMPTY == stack_FULL(my_stack)))
    {
        ret = R_NOK;
        printf("stack empty\n");
    }
    else
    {
        printf("Stack Values : ");
        for(index = 0; index <= my_stack->stack_pointer; index++)
        {
            printf("%i ", my_stack->stack_pool[index]);
        }
        printf("\n");
        ret = R_OK;
    }
    return ret;
}


Return_State stack_size(stack_t *my_stack, uint32 *st_size)
{
    Return_State ret = R_NOK;
    if((NULL == my_stack) || (NULL == st_size) || (STACK_EMPTY == stack_FULL(my_stack)))
    {
        ret = R_NOK;
        printf("stack empty\n");
    }
    else
    {
        *st_size = my_stack->stack_pointer + 1;
        ret = R_OK;
    }
    return ret;
}
