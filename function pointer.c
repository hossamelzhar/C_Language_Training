#include <stdio.h>

void build(int* a,int size);
int* create();
void print(int a,char *name);


int main()
{

int arr[10];
int i=0;
build(arr,10);
for(i=0;i<10;i++)
printf("arr[%d] is : %d\n",i,arr[i]);
//******************************************************************
printf("\nbuilding finished\n\nnow it is the time of creation.\n\n");
//******************************************************************
int *p;
p=create(10);
for(i=0;i<10;i++)
    printf("arr1[%d] value is : %d\n",i,*(p+i));
//******************************************************************

 void (*fptr)(int,char*)=print;

   (*fptr)(5,"hossam");




return 0;
}


void build(int* a,int size)
{
  int i=0;
  for(i=0;i<size;i++)
  *(a+i)=i+10;
}

int* create()
{
    int i=0;
   static int arr1[10];
  for(i=0;i<10;i++)
    arr1[i]=i*10;

    return arr1;
}



void print(int a,char *name)
{
    int i=0;
    for(i=0;i<a;i++)
        printf("printing the name %s %d times\n",name,a);
}

