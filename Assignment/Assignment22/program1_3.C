// input :  iRow = 4 , icol = 4
// output : 
/*
  A A A A A
  B B B B B
  C C C C C
  
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char Ch1 = '\0';
  
    for(i = 1,Ch1 = 'A'; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            printf("%c\t",Ch1);
          
        }
        Ch1++;
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);


    Pattern(iValue1,iValue2);

    return 0;
}







