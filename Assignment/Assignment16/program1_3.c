#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[],int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}