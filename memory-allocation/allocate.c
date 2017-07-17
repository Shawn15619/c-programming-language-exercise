
#include <stdio.h>
#include <stdlib.h>

#define BLKSIZ 80
#define STKSIZ 4000

typedef union block
{
    union block *link;
    char data[BLKSIZ];
} BLOCK;

static BLOCK *heap;
static BLOCK *top_of_heap;
static BLOCK *btm_of_heap;

void Init_Heap()
{
    unsigned blk;
    BLOCK *ptr;
    heap = (BLOCK*)malloc(BLKSIZ);
    btm_of_heap = heap;
    ptr=heap;

    for(blk = 0; blk < 49 ; blk++)
    {
        ptr->link = (BLOCK *)malloc(BLKSIZ);
        ptr = ptr->link;
    }
    ptr->link = NULL;
    top_of_heap = ptr;
}

void My_Free(BLOCK *ptr)
{
    if(ptr >= btm_of_heap)
    {
        if(ptr<top_of_heap)
        {
            ptr->link = heap;
            heap = ptr;
            return ;
        }
        free(ptr);
        return ;

    }
    puts("\nAttempt to free unallocated block!\n\7");
    exit(1);
}

void *Allocate(unsigned bytes)
{
    void *ptr;

    if(bytes<=BLKSIZ)
    {
        if(heap!=NULL)
        {
            ptr=heap;
            heap=(BLOCK *)heap->link;
            return ptr;
        }
    }

    puts("\nInsufficient memory: malloc()\n");
    exit(1);
}
