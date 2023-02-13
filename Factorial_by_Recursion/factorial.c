#include <stdio.h>
unsigned int number;
unsigned int result;
int factorial(const unsigned int number);

int main()
{
	
	for(;;)
	{
		printf("please enter number to get factorial : ");
		scanf("%i",&number);
		printf("\n");
		result = factorial(number);
		printf("Factorial of number %i is = %i ",number,result);
		printf("\n");
	}
	
	return 0;
}



int factorial(const unsigned int number)
{
		if(number == 0)
		{
			return 1;
		}
		else 
		{
			return(number * (factorial(number-1)));
		}
}