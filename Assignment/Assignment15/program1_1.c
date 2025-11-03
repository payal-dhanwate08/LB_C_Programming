#include<stdio.h>

int CountEven(int iNo)
{
    int count = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            count ++;
        }
        iNo = iNo / 10;   
    }
    return count;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}