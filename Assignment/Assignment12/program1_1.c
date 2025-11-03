#include<stdio.h>
void print_factors(int number)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt<=(number/2) ; iCnt++ )
    {
        if(number%iCnt==0)
        {
          printf(" %d\t",iCnt);
        }

    }
}
int main()
{
    int number = 0;
    printf("Enter Number : ");
    scanf("%d",&number);
    print_factors(number);

    return 0;


}