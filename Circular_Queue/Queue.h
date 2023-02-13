#ifndef _QUEUE_H
#define _QUEUE_H


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#define FULL    1
#define EMPTY  -1
#define END     0


typedef unsigned int uint32;
typedef unsigned short uint16;
typedef signed int sint32;
typedef signed short sint16;


typedef struct
{
    sint32 *data;
    sint32 *rear_ptr;
    sint32 *front_ptr;
    uint16 elem_count;
    uint16 max_size;

}Queue_T;

void Create_Queue(Queue_T *Que, uint32 Que_size);
void Enqueue(Queue_T *Que);
sint32 DeQueue(Queue_T *Que, uint16 *ret);
void Display_Queue(Queue_T *Que);
void Queue_Size(Queue_T *Que);
void Free_Queue(Queue_T *Que);

#endif // _QUEUE_H
