// input :  5 
// output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    iCount = iNo;

    for(iCnt = 1; iCnt<=iNo*2; iCnt++)
    {
        if(iCnt %2 == 0)
        {
            printf("#\t");
        }
        else
        {
            printf("%d\t",iCount);
            iCount--;
        }
    }   
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}