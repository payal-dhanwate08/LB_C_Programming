// input :  iRow = 4 , icol = 3
// output : 
/*
    1 1 1 1
    2 2 2 2
    3 3 3 3
    
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
 
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
           printf("%d\t",i);
        }
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