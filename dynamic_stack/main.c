#include "d_stack.h"

Dynamic_Stack stack1;
sint32 value = 0;

int main()
{
    printf("Enter Number Of Stack Elements : ");
    scanf("%i",&value);
    Stack_Create(&stack1, value);
    Stack_Push(&stack1, 11);
    Stack_Push(&stack1, 22);
    Stack_Push(&stack1, 33);
    Stack_Push(&stack1, 44);
    Stack_Push(&stack1, 55);
    Stack_Push(&stack1, 66);
    Stack_Push(&stack1, 77);
    printf("============================\n");
    value = Stack_Size(&stack1);printf("Stack_Size = %i\n",value);
    Stack_Display(&stack1);
    value = Stack_Top(&stack1); printf("Top value = %i\n",value);
    value = Stack_Pop(&stack1); printf("Pop value = %i\n",value);
    value = Stack_Pop(&stack1); printf("Pop value = %i\n",value);
    value = Stack_Pop(&stack1); printf("Pop value = %i\n",value);
    Stack_Size(&stack1);
    Stack_Display(&stack1);
    Stack_Free(&stack1);

    return 0;
}
