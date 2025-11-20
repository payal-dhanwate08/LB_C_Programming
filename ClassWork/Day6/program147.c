#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0, iMin = 0;    

    iMin = Arr[0];  //important

    for(iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

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
    iRet = Minimum(iptr,iLength);
    printf("Minimun number is %d\n",iRet);
    
    //Step 3 : free the memory
    free(iptr);

    return 0;
}
