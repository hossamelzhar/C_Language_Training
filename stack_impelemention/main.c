#include "stack.h"


stack_t stack1;
int main()
{
    Return_State ret = R_NOK;
    uint32 value = 0;

    stack_init(&stack1);
    stack_display(&stack1);
    ret =stack_size(&stack1, &value);
    if(R_OK == ret)
    {
        printf("stack size = %i\n",value);
    }
    stack_push(&stack1, 11);
    stack_push(&stack1, 22);
    stack_push(&stack1, 33);
    stack_display(&stack1);
    ret =stack_size(&stack1, &value);
    if(R_OK == ret)
    {
        printf("stack size = %i\n",value);
    }
    stack_push(&stack1, 22);
    stack_push(&stack1, 33);
    stack_push(&stack1, 44);
    stack_display(&stack1);
    ret =stack_size(&stack1, &value);
    if(R_OK == ret)
    {
        printf("stack size = %i\n",value);
    }
    ret = stack_pop(&stack1, &value);
    if(R_OK == ret)
    {
        printf("The pop Value = %i\n",value);
    }
    ret = stack_pop(&stack1, &value);
    if(R_OK == ret)
    {
        printf("The pop Value = %i\n",value);
    }
    ret = stack_pop(&stack1, &value);
    if(R_OK == ret)
    {
        printf("The pop Value = %i\n",value);
    }
    stack_display(&stack1);
    ret =stack_size(&stack1, &value);
    if(R_OK == ret)
    {
        printf("stack size = %i\n",value);
    }
    ret = stack_top(&stack1, &value);
    if(R_OK == ret)
    {
        printf("The Top Value = %i\n",value);
    }


    return 0;
}
