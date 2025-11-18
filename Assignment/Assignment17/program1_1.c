#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
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
    int iSize = 0, iCnt = 0,iValue = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number ");
    scanf("%d",&iValue);

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

    bRet = Check(p,iSize,iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}