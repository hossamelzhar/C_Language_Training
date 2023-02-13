#include <stdio.h>

int arr[]={11, 22, 33, 44, 55, 66, 77};


int main()
{

    printf("%i\n",*(&arr+1)-arr);

    return 0;
}
