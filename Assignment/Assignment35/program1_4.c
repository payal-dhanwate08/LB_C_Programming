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

int SecMaximum(PNODE Head)
{
    int iMax1 = 0;       // Maximum
    int iMax2 = 0;       //second Maximum


    while(Head == NULL)
    {
        return -1;
    }
    while(Head != NULL)
    {
        if(Head->data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head->data;
        }
        else if( Head->data < iMax2  &&  Head->data < iMax1)
        {
            iMax2 = Head->data;
        }
        Head = Head->next; 
    }
        
    return iMax2;
}
   


int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst(&first , 89);
    InsertFirst(&first , 60);
    InsertFirst(&first , 22);
    InsertFirst(&first , 11);

    iRet = SecMaximum(first);
    printf("Second Maximum number is : %d",iRet);

    return 0;
    
}
