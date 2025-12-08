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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)       // LL is Empty
    {
        (*first) = newn;
    }
    else                     //LL contain atleast one node
    {
        temp = *first;       //100

        while(temp->next != NULL)
        {
            temp = temp->next;    
        }
        temp->next = newn;
        printf("\n");
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if((*first) == NULL)           //case 1
    {
       return;
    }
    else if((*first)->next == NULL)     //case 2
    {
        free(*first);
        *first = NULL;
    }
    else                               //case 3
    {
       temp = (*first);
       *first = (*first)->next;
       free(temp);

    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)           //case 1
    {
       return;
    }
    else if((*first)->next == NULL)     //case 2
    {
        free(*first);
        *first = NULL;
    }
    else
    {
       
    }
}

//call by value
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL \n");
}

//call by value
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

    InsretLast(&head,101);
    InsretLast(&head,111);
    InsretLast(&head,121);

    Display(head);

    iRet = Count(head);
    
    printf("Number of nodes :%d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    
    printf("Number of nodes :%d\n",iRet);



    return 0;
}