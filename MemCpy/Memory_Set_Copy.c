/**
**********************************************************************************************************
* @Project Name         : Memory_Set_Copy                                                                *
* @Author Name          : Hossam Masoud Elzhar                                                           *
* @Created Date         : 04/09/2022                                                                     *
* @Program Description  : Impelementation of memset and memcpy Functions                                 *
**********************************************************************************************************
*/

/* preprocessor directives Section */
#include <stdio.h>
#define ArrLen 50


/* Definition Section */
unsigned char name_1[ArrLen]= "Hossam Masoud Abd El-Mordy Elzhar";
unsigned char name_2[ArrLen]= "Eslam Samir Mohamed Ahmed        "; 


/* Global Declaration Section */
/*Use this Function To Set An Array Elements Value*/
unsigned char My_MemSet(unsigned char *const dest,      /*Destination Address*/
						const unsigned char value,   	
						const unsigned int _byte_len);  /*Number of Elements want to set*/

/*Use this Function To copy Elements Value from An Array to Another*/						
unsigned char My_MemCpy(unsigned char *const dest,      /*Destination Address*/
						unsigned char *const src,       /*Source Address*/
						const unsigned int _byte_len);  /*Number of Elements want to Copy*/



int main()
{
	unsigned char Error_State;
	
	
	printf("%s\n",name_1);
	printf("%s\n",name_2);
	
	printf("------------------------------------\n");
	
	Error_State = My_MemCpy((name_1+7), name_2, 26); 
	Error_State = My_MemCpy(name_2, name_1, 7);
	
	printf("%s\n",name_1);
	printf("%s\n",name_2);
	
	printf("------------------------------------\n");
	
	Error_State = My_MemSet(name_1, '*', 6);
	Error_State = My_MemSet((name_1+26), '*', 15);
	Error_State = My_MemSet(name_2, '*', 6);
	Error_State = My_MemSet((name_2+26), '*', 15);
	
	printf("%s\n",name_1);
	printf("%s\n",name_2);
	
	return 0;
}


/* Sub-Function Section */
unsigned char My_MemSet(unsigned char *const dest,
						const unsigned char value,
						const unsigned int _byte_len)
{

	unsigned char Error_State = 0; /*No Errors*/
	unsigned int  index	 = 0;
	
	if(NULL == dest)
	{
		Error_State = 1;  /*Error*/
	}
	else
	{
		for(index=0; index < _byte_len; index++)
		{
			dest[index]=value;
		}
	}
	
	return Error_State;
}


unsigned char My_MemCpy(unsigned char *const dest, unsigned char *const src, const unsigned int _byte_len)
{
	unsigned char Error_State = 0; /*No Errors*/
	unsigned int  index	 = 0;
	
	if(NULL == dest || NULL == src)
	{
		Error_State = 1; /*Error*/
	}
	else
	{
		for(index=0; index < _byte_len; index++)
		{
			dest[index]=src[index];
		}
	}
	
	return Error_State;
}
