// input :  iRow = 4 , icol = 4
// output : 
/*
    A B C D
    a b c d
    A B C D
    a b c d 
    
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char Ch1 = '\0';
    char Ch2 = '\0';
  
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1,Ch1 = 'a',Ch2 = 'A' ; j<=iCol; j++)
        {
            if(i %2 == 0)
            {
                printf("%c\t",Ch1);
                Ch1++;
            }
            else
            {
                printf("%c\t",Ch2 );
                Ch2++;
                
            }
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







