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


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL \n");
}


int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsretFirst(&head,75);
    InsretFirst(&head,51);
    InsretFirst(&head,21);
    InsretFirst(&head,11);

    Display(head);

    iRet = Count(head);
    
    printf("Number of nodes :%d",iRet);


    return 0;
}