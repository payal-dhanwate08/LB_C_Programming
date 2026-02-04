#include<stdio.h>

void Display()
{
    static int iCnt =5;
    if(iCnt >= 1)
    {
      printf("%d\t",iCnt);
      iCnt--;

    }
    Display();
    printf("\n");

}
int main()
{
    Display();

    return 0;

}