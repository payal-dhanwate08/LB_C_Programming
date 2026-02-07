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

int SumDigit(PNODE Head)
{
    int iSum = 0;
    int iDigit = 0;
    int no = 0;


    while(Head != NULL)
    {
        no = Head->data;
        iSum = 0; 

        while(no != 0)
        {
            iDigit = no % 10;
            iSum = iSum + iDigit;
            no = no/10;
        }
        printf("%d\t",iSum);
        
        Head = Head->next;
    }   
}
   
int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first , 89);
    InsertFirst(&first , 60);
    InsertFirst(&first , 22);
    InsertFirst(&first , 11);

    SumDigit(first);

    return 0;
    
}
