#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FSLAE 0
typedef int BOOL;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Minimum(PNODE Head)
{
    int iMin = 0;
    iMin = Head->data;

    while(Head != NULL)
    {
        if(iMin > Head->data)
        {
            iMin = Head->data;
        }
        Head = Head->next;
        
    }
    return iMin;
    

}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 101);
    InsertFirst(&first , 51);
    InsertFirst(&first , 21);
    InsertFirst(&first , 11);

    iRet = Minimum(first);

    printf("Smallest element in linked list is: %d ",iRet);

    return 0;
    
}
