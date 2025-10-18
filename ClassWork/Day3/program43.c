#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter first number :");
    scanf("%d",&iValue1);

    printf("Enter second number :");
    scanf("%d",&iValue2);
    if((iValue1 % iValue2) == 0)
    {
        printf("it is complitly devisible\n");
    }
    else
    {
        printf("it is not devisible");
    }

    return 0;
}