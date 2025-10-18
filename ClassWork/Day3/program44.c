#include<stdio.h>
#include<stdbool.h>

bool CheckDividible(int iNo1,int iNO2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue2);

    bRet = CheckDividible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("it is complitly devisible\n");
    }
    else
    {
        printf("it is not devisible");
    }

    return 0;
}