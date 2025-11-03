#include<stdio.h>
int Count_factors(int number)
{
    int iCnt = 0;
    int iFrequent = 0;
    if(number < 0)
    {
        number = -number;
    }
    for(iCnt = 1 ; iCnt<=number; iCnt++ )
    {
        if(number%iCnt == 0)
        {
           iFrequent++;
        }

    }
    return iFrequent;
}
int main()
{
    int number = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    printf("%d\n",Count_factors(number));

    return 0;


}