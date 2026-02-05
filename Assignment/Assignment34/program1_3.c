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

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}

void InsertLast(PPNODE Head , int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
            temp = temp->next;
       }
       temp->next = newn;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet= 0;
    int iValue = 0;

    InsertLast(&first , 101);
    InsertLast(&first , 51);
    InsertLast(&first , 21);
    InsertLast(&first , 11);


    iRet = Addition(first);
    printf("Addition of all element in linked list : %d  ",iRet);

    return 0;
    

}
