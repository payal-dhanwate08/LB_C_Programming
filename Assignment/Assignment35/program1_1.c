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

void DisplayPerfect(PNODE Head)
{
    int iSum = 0;
    int iCnt = 0;


    while(Head != NULL)
    {
        iSum = 0;

        for(iCnt = 1 ;iCnt <= Head->data / 2 ;iCnt++)
        {
            if(Head->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == Head->data)
        {
            printf("%d\t",Head->data);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first , 101);
    InsertFirst(&first , 51);
    InsertFirst(&first , 6);
    InsertFirst(&first , 11);

    DisplayPerfect(first);

    return 0;
    
}
