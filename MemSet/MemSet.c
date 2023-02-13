#include <stdio.h>
#define ArrLen 50




unsigned char Arr[ArrLen]= "Hossam Masoud Abd El-Mordy Elzhar";
unsigned char RetVal;
	

unsigned char My_MemSet(unsigned char *const dest,
						const unsigned char val,
						const unsigned int _byte_len);


int main()
{
	
	printf("%s\n",Arr);
	
	RetVal = My_MemSet(Arr, '*', ArrLen);
	
	printf("%i\n",RetVal);
	printf("%s\n",Arr);

	
	return 0;    
}



unsigned char My_MemSet(unsigned char *const dest,
						const unsigned char val,
						const unsigned int _byte_len)
{

	unsigned char RetVal = 0;
	unsigned int  index	 = 0;
	
	if(NULL == dest)
	{
		RetVal = 1;
	}
	else
	{
		for(index=0; index < _byte_len; index++)
		{
			dest[index]=val;
		}
	}
	
	return RetVal;
}
