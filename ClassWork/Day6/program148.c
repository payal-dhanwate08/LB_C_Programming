#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

void Update(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
   
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
    Update(iptr,iLength);
    printf("Updated data from Array is :");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",iptr[iCnt]);
    }
    
    //Step 3 : free the memory
    free(iptr);

    return 0;
}
