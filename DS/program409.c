#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsrtFirst(PPNODE first,PPNODE last,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first == NULL) && (*last == NULL))                //@
    {
        *first = newn;
        *last = newn;     
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

    (*last)->next = *first;                      //@
}

void InsertLast(PPNODE first,PPNODE last,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;     
    }
    else
    {
        (*last)->next = newn;             //@
        *last = newn;                     //@
    }

    (*last)->next = *first;
}

void InsertAtPos(PPNODE first,PPNODE last,int no,int pos)
{

}

void DeleteFirst(PPNODE first,PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL  && *last == NULL)             //case 1
    {
        return;
    }
    else if(*first == *last)                         //case 2
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else                                            //case 3
    {
        *first = (*first)->next;                //*first = temp->next;
        free(temp);

        (*last)->next = *first;
    }

   
}

void DeleteLast(PPNODE first,PPNODE last)
{
    if(*first == NULL  && *last == NULL)             //case 1
    {
        return;
    }
    else if(*first == *last)                         //case 2
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else                                            //case 3
    {

    }
}

void DeleteAtPos(PPNODE first,PPNODE last,int pos)
{
    
}

void Display(PNODE first,PNODE last)
{
    do
    {
        printf("| %d | ->",first->data);
        first = first->next;

    } while(first != last->next);

    printf("\n");
    
}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;

    do
    {
        iCount++;
        first = first->next;

    } while(first != last->next);

    printf("\n");

    return iCount;
}


int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;                  //@
    int iRet = 0;

    InsrtFirst(&head,&tail,51);
    InsrtFirst(&head,&tail,21);
    InsrtFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);

    iRet = Count(head,tail);
    printf("number of node : %d\n",iRet);

    DeleteFirst(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);
    printf("number of node : %d\n",iRet);

    return 0;
}



