#ifndef _D_STACK_H
#define _D_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Types.h"

typedef struct
{
    sint32 *Stack_Pool;
    sint32  Stack_Pointer;
    uint32  Stack_Size;

}Dynamic_Stack;

typedef enum
{
    FULL     = 1,
    NOT_FULL = 0,
    EMPTY    = -1

}Stack_State;

typedef enum
{
    OK  = 0,
    NOK =1

}Return_State;

/******
* @Brief  Create and Initialize the stack
* @Param  (stack_size) Number of stack elements
* @RetVal Return pointer to created stack in heap\
*         and NULL if failed to create
*******/
void Stack_Create(Dynamic_Stack *my_stack, uint32 stack_size);

/******
* @Brief  Free the stack memory
* @Param  (*my_stack) Pointer to the stack
* @RetVal No return
*******/
void Stack_Free(Dynamic_Stack *my_stack);

/******
* @Brief  Push a new value to the stack
* @Param  (*my_stack) Pointer to the stack
* @param  (value) The value that will be Pushed
* @RetVal Return OK if element pushed successfully\
*         Return NOK if not
*******/
void Stack_Push(Dynamic_Stack *my_stack, sint32 value);

/******
* @Brief  Pop the last element in the stack and remove it from the stack
* @Param  (*my_stack) Pointer to the stack
* @RetVal Return the last value in the stack
*******/
sint32 Stack_Pop(Dynamic_Stack *my_stack);

/******
* @Brief  Pop the last element in the stack
* @Param  (*my_stack) Pointer to the stack
* @RetVal Return the last value in the stack
*******/
sint32 Stack_Top(Dynamic_Stack *my_stack);


/******
* @Brief  Get the number of the stack elements
* @Param  (*my_stack) Pointer to the stack
* @RetVal Return the number of the stack elements
*******/
uint32 Stack_Size(Dynamic_Stack *my_stack);

/******
* @Brief  Print the stack elements
* @Param  (*my_stack) Pointer to the stack
* @RetVal No Return
*******/
void Stack_Display(Dynamic_Stack *my_stack);

#endif // _D_STACK_H
