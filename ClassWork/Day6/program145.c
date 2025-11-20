#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;    

    iMax = Arr[0];  //important

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

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
    iRet = Maximum(iptr,iLength);
    printf("Maximun number is %d\n",iRet);
    
    //Step 3 : free the memory
    free(iptr);

    return 0;
}
