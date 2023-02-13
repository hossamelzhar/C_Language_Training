
#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include "Platform_Types.h"

#define STACK_POOL_MAX 5
#define STACK_POOL_EMPTY -1
#define ZERO 0

typedef struct
{
    uint32 stack_pointer;
    uint32 stack_pool[STACK_POOL_MAX];

}stack_t;

typedef enum
{
    R_OK,
    R_NOK,
    STACK_FULL,
    STACK_EMPTY,
    STACK_NOT_FULL

}Return_State;


Return_State stack_init(stack_t *my_stack);
Return_State stack_push(stack_t *my_stack, uint32 value);
Return_State stack_pop(stack_t *my_stack, uint32 *value);
Return_State stack_top(stack_t *my_stack, uint32 *value);
Return_State stack_display(stack_t *my_stack);
Return_State stack_size(stack_t *my_stack, uint32 *st_size);

#endif // _STACK_H
