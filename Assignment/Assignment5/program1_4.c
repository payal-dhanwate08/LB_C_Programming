#include<stdio.h>
void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Its is positive number");
    }
    else if(num < 0)
    {
        printf("It is negative number");
    }
    else
    {
        printf("It is Zero");
    }

}

int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;
}