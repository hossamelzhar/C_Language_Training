#include <stdio.h>
#include <stdlib.h>

unsigned int arr[3][4] = {{11, 22, 33, 44},
                          {55, 66, 77, 88},
                          {99, 11, 55, 77}};


unsigned int (*ptr)[4]= NULL;


int main()
{
    ptr = arr;

    printf("0x%p\n",arr[0]); //Address of row 0 col 0
    printf("0x%p\n",(arr[0]+1)); //Address of row 0 col 1
    printf("%i\n",*(arr[0]+1)); //Value of row 0 col 1
    printf("------------------------------\n");
    printf("0x%p\n",(arr[0]+2)); //Address of row 0 col 2
    printf("0x%p\n",(arr[0]+3)); //Address of row 0 col 3
    printf("0x%p\n",(arr[0]+4)); //Address of row 1 col 0 /*Because 2D array are stored as 1D array, Row 0 then Row 1 after it*/
    printf("------------------------------\n");
    printf("0x%p\n",arr[1]); //Address of row 1 col 0
    printf("0x%p\n",arr[2]); //Address of row 2 col 0
    printf("------------------------------\n");
    printf("0x%p\n",ptr); //Address of row 0 col 0
    printf("0x%p\n",*ptr); //Same as (ptr) Address of row 0 col 0
    printf("0x%p\n",*(ptr+1)); //Address of row 1 col 0
    printf("%i\n",**(ptr+1)); //Value of row 1 col 0
    printf("%i\n",**(ptr+1)+1); //(Value of row 1 col 0) +1 = 56
    printf("%i\n",*(*(ptr+1)+1)); //Value of row 1 col 1

    return 0;
}
