#include<stdio.h>

typedef enum
{
  sun,mon,tue,wed,thu,fri,sat
}day;

int main()
{
    day d1=mon;

    printf("%d",d1);
    return 0;
}
