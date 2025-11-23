// input :  1 2 3 4 5 
// output : A B C D E

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    char Ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",Ch); 
        Ch++;
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