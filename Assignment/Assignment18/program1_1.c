#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0, iMax = 0;   
    for(iCnt = 0; iCnt < iLength; iCnt++)
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

    iRet = Maximum(p,iSize);
    printf("Largest number is :%d",iRet);

    free(p);

    return 0;
}