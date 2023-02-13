#include <stdio.h>
#include <stdlib.h>

long* subarraysum(int numcount, int numbers[], int qRow, int qCol, int queries[][3]);

int main()
{
    int nums[5] = {20, 30, 0, 0, 40};
    int queries[3][3] = { {1,3,10}, {2,4,10}, {3,5,10}  };

    long *sum = subarraysum(5, nums, 3, 3, queries);
    int i = 0;
    for(i=0; i< 3; i++)
    {
        printf("%ld  ", *(sum+i));
    }
    return 0;
}


long* subarraysum(int numcount, int numbers[], int qRow, int qCol, int queries[][3])
{
    int NumIndex = 0;
    int QIndex = 0;
    long sum = 0;
    long* sumarry = (long*) calloc(qRow, sizeof(long));

    for(QIndex = 0; QIndex < qRow; QIndex++)
    {
        for(NumIndex = (queries[QIndex][0] - 1); NumIndex < queries[QIndex][1]; NumIndex++)
        {
            if(numbers[NumIndex] == 0)
            {
                sum += queries[QIndex][2];
            }
            else
            {
                sum += numbers[NumIndex];
            }

        }

        *(sumarry+QIndex) = sum;
        sum = 0;

    }
    return sumarry;
}
