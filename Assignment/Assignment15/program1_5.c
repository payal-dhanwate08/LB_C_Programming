#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvenCount = 0;
    int iOddCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit%2==0)
        {
            iEvenCount = iEvenCount + iDigit;

        }
        else
        {
            iOddCount = iOddCount + iDigit;
        }
        
        iNo = iNo / 10;   
    }
    return iEvenCount - iOddCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}