#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iLength)
{
    int iCnt = 0 ,EveniCount = 0,OddiCount = 0;
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            EveniCount++;
        }
        else
        {
            OddiCount++;
        }
    }
    return (EveniCount - OddiCount);
   
}

int main()
{
    int iSize = 0,iCnt = 0,iLength = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (NULL == p)
    {
        printf("Unable to allocate memory");
        return  -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequncy(p,iSize);
    printf("%d",iRet);

    free(p);
    

    return 0;
}