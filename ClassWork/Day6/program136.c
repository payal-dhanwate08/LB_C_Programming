#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculete(int Arr[],int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iLength = 0, iCnt = 0 , iRet = 0,iValue = 0;
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

    printf("Enter the number to calculate frquncy :");
    scanf("%d",&iValue);

    //Step 2: use the memory
    iRet = FrequencyCalculete(iptr,iLength,iValue);
    printf("Frquency %d is :%d\n",iValue,iRet);

    //Step 3 : free the memory

    free(iptr);

    return 0;
}
