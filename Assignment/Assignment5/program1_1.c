#include<stdio.h>
void CheckEvenOdd(int num)
{
    if(num <=0)
    {
        num = -num;
    }
    if(num%2==0)
    {
        printf("%d is a Even  number",num);
    }
    else
    {
        printf("%d is a Odd number ",num);
    }
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    CheckEvenOdd(number);
    return 0;

}