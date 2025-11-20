#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

//< O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        }
    }
    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iLength = 0, iCnt = 0 ,iValue = 0;
    bool bRet = false;
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

    printf("Enter the number to Search :");
    scanf("%d",&iValue);

    //Step 2: use the memory
    bRet = LinearSearch(iptr,iLength,iValue);
    
    if(bRet == true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is not present in the data\n",iValue);
    }

    //Step 3 : free the memory

    free(iptr);

    return 0;
}
