// 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt <= iNo; iCnt+=2)   // += short hand opreter
    {
        printf("%d\t",iCnt);   
    } 
}

// Time complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please enter frequncy :");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}