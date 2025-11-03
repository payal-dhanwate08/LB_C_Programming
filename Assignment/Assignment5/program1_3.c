#include<stdio.h>
void CheckLeapYear(int year)
{
    if(year%4==0)
    {
        printf("%d It is Leap year",year);
    }
    else
    {
        printf("%d It is not leap year ",year);
    }
}
int main()
{
    int yr;
    printf("Enter year :");
    scanf("%d",&yr);
    CheckLeapYear(yr);


    return 0;
}