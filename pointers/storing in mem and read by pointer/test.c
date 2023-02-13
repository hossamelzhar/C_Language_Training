#include <stdio.h>

unsigned int arr[5]= {0x11225566, 0x33447788, 0x55669911, 0x77882233, 0x99114455};
unsigned char *ptr= NULL;
unsigned char iterator;

int main()
{
	ptr = arr;
	for(iterator=0; iterator<20; iterator++)
	printf("arr[%i]= 0x%X\n",iterator,*(ptr+iterator));
	
	return 0;
}