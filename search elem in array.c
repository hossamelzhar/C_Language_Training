#include <stdio.h>



int search(void* arr,int n,int ele_size,void *p);

int i=0;

int main()
{
    int arr[]={15,26,35,7,99,12,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int x=0;
    while(1)
    {
    fflush(stdin); //to clear the input buffer every time; if you enter a char with out it the program runs away.
    printf("enter a num to search for in array : ");
    scanf("%d",&x);
    int ele=search(arr,n,sizeof(int),&x);
    if (ele==-1)
        printf("element not found in our array\n\n");
    else
        printf("the element index in array is %d\nand its value is %d\n\n",ele,arr[ele]);

    }
}


int search(void* arr,int n,int ele_size,void *p)
{
    char *ptr=(char*) arr;
    for(i=0;i<n;i++)
        if(*(int*)(ptr+i*ele_size)==*(int*)p)
            return i;


    return -1;
}
