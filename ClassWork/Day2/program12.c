/*
    START
        Accept number and store as no 
        divide by 2
        if the remainder is 0 
            than display as Even
        otherwise 
            display as 0

    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("it is Even number \n");
    }
    else 
    {
        printf("it is Odd number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}