#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iptr = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iLength);

    //step 1 : Allocate the mwemory
    iptr = (IPTR)malloc(iLength* sizeof(int));

    if(NULL == iptr)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the values :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    //Step 2: use the memory
    //call to the functiom which contains business logic
    //fun(iptr,iLength);

    //Step 3 : free the memory

    free(iptr);

    return 0;
}
