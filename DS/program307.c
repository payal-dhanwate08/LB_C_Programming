#include<stdio.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    
};

typedef struct node NODE;

int main()
{
    struct node *Head = NULL;
    NODE obj;

    Head = &obj;

    Head->data = 11;
    Head->next = NULL;
    
    return 0;
}