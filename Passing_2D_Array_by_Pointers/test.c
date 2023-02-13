#include <stdio.h>

#define A_1D_LEN 3
#define A_2D_LEN 3

unsigned int arr_1[A_1D_LEN][A_2D_LEN]= {{11, 22, 33},
                                        {44, 55, 66},
                                        {77, 88, 99}};

void Print_2D_Array(const unsigned int array[A_1D_LEN][A_2D_LEN]);
void Print_2D_Array_1(const unsigned int array[][A_2D_LEN], const unsigned int _1D_len);
void Print_2D_Array_2(const unsigned int (*ptr)[A_2D_LEN], const unsigned int _1D_len);
void Print_2D_Array_3(const unsigned int (*ptr)[][A_2D_LEN], const unsigned int _1D_len);


int main()
{

	Print_2D_Array(arr_1);
	printf("\n");
	Print_2D_Array_1(arr_1, A_1D_LEN);
	printf("\n");
	Print_2D_Array_2(arr_1, A_1D_LEN);
	printf("\n");
	Print_2D_Array_3(&arr_1, A_1D_LEN);

	return 0;
}


void Print_2D_Array(const unsigned int array[A_1D_LEN][A_2D_LEN])
{
	unsigned int index_1 = 0;
	unsigned int index_2 = 0;

	for(index_1=0; index_1<A_1D_LEN; index_1++)
	{
		for(index_2=0; index_2<A_2D_LEN; index_2++)
		{
			printf("%i\t",array[index_1][index_2]);
		}
		printf("\n");
	}

}



void Print_2D_Array_1(const unsigned int array[][A_2D_LEN], const unsigned int _1D_len)
{
    unsigned int index_1 = 0;
	unsigned int index_2 = 0;

	for(index_1=0; index_1<_1D_len; index_1++)
	{
		for(index_2=0; index_2<A_2D_LEN; index_2++)
		{
			printf("%i\t",array[index_1][index_2]);
		}
		printf("\n");
	}
}



void Print_2D_Array_2(const unsigned int (*ptr)[A_2D_LEN], const unsigned int _1D_len)
{
    unsigned int index_1 = 0;
	unsigned int index_2 = 0;

	for(index_1=0; index_1<_1D_len; index_1++)
	{
		for(index_2=0; index_2<A_2D_LEN; index_2++)
		{
			printf("%i\t",(*ptr+index_1)[index_2]);
		}
		printf("\n");
	}
}



void Print_2D_Array_3(const unsigned int (*ptr)[][A_2D_LEN], const unsigned int _1D_len)
{
    unsigned int index_1 = 0;
	unsigned int index_2 = 0;

	for(index_1=0; index_1<_1D_len; index_1++)
	{
		for(index_2=0; index_2<A_2D_LEN; index_2++)
		{
			printf("%i\t", *(*((*ptr)+index_1)+index_2));
		}
		printf("\n");
	}
}
