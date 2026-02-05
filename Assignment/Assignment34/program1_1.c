#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FSLAE 0
typedef int BOOL;

struct node 
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int SearchFirstOcc(PNODE Head , int no)
{
    int iCnt = 0;

    iCnt = 1;
    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iCnt;

        }
        else
        {
            Head = Head->Next;
            iCnt++;
        }
    }

    printf("Number is node present in linked list");
    return 0;

} 

int main()
{
    PNODE first = NULL;
    int iRet= 0;
    int iValue = 0;
    InsertFirst(&first , 101);
    InsertFirst(&first , 51);
    InsertFirst(&first , 21);
    InsertFirst(&first , 11);

    printf("Enter the number that you want to search : ");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(first , iValue);
    printf("%d",iRet);

    return 0;
    

}
