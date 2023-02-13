#include <stdio.h>
#include <stdlib.h>

#define arr_size 11000

void merge(char mainArray[], char l_array[], char r_array[], int size)
{
    int l_size = size/2;
    int r_size = size - l_size;

    int m = 0;
    int l =0, r = 0;

    while((l < l_size) && (r < r_size))
    {
        if(l_array[l] <= r_array[r])
        {
            mainArray[m] = l_array[l];
            l++;
        }
        else
        {
            mainArray[m] = r_array[r];
            r++;
        }
        m++;
    }

    while(l < l_size)
    {
        mainArray[m] = l_array[l];
        l++;
        m++;
    }
    while(r < r_size)
    {
        mainArray[m] = r_array[r];
        r++;
        m++;
    }
}


void mergeSort(char array[], int size)
{
    if(size <= 1)
        return;
    int l_size = size/2;
    int r_size = size - l_size;

    char l_array[l_size];
    char r_array[r_size];

    for(int i = 0; i<l_size; i++)
    {
        l_array[i] = array[i];
    }
    for(int i=0; i<r_size; i++)
    {
        r_array[i] = array[i+l_size];
    }

    mergeSort(l_array, l_size);
    mergeSort(r_array, r_size);

    merge(array, l_array, r_array, size);

}

void prcharArray(char array[], int size)
{
    for(int i=0; i<size; i++)
        printf("%d=", array[i]);
    printf("\n\n");
}

void main(void)
{
    char arr[arr_size] = {0};

    for(int i=0; i<arr_size; i++)
        arr[i] = rand()%100;

    //prcharArray(arr, arr_size);
    mergeSort(arr, arr_size);
    //prcharArray(arr, arr_size);
}
