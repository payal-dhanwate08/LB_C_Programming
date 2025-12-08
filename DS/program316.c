#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsretFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)       // LL is Empty
    {
        (*first) = newn;
    }
    else                     //LL contain atleast one node
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

void InsretLast(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)       // LL is Empty
    {
        (*first) = newn;
    }
    else                     //LL contain atleast one node
    {
        
    }
}

int main()
{
    PNODE head = NULL;
    
    InsretFirst(&head,51);
    InsretFirst(&head,21);
    InsretFirst(&head,11);

    return 0;
}