#include<stdio.h>

int CountNonFactors(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt ) != 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

//Time complexity O(N)
int main()
{
    int iValue = 0; int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = CountNonFactors(iValue);

    printf("Number of factors are :%d\n",iRet);

    return 0;
}