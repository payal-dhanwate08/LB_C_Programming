#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0,iOdd = 0;  
     
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return iEven - iOdd;

}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (NULL == p)
    {
        printf("unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("%d",iRet);

    free(p);

    return 0;
}