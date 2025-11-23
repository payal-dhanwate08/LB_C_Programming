// input :  iRow = 4 , icol = 4
// output : 
/*
    A B C D
    A B C D
    A B C D
    A B C D
    
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
     char Ch = 'A';
  
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
           printf("%c\t",Ch);
        }
        Ch++;
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







