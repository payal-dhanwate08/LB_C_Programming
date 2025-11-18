#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iMin = 0, iMax = 0;  
    iMin = Arr[0];
    iMax = Arr[0];
     
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt]; 
        }
    }
    return iMax -iMin;

}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0,iValue = 0;
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
    printf("Defference is :%d",iRet);

    free(p);

    return 0;
}