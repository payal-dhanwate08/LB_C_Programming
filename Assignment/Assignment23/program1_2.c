/*
// input :  iRow = 3 , icol = 4
// output : 
/*
2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7
    
*/
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    int iCount1 = 0,iCount2 = 0;
   
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCount1 = 1,iCount2 = 2; j <= iRow; j++)
        {
           if(i%2 == 0)
           {
                printf("%d\t",iCount1);
                iCount1 = iCount1 + 2;
           }
           else
           {
                printf("%d\t",iCount2);
                iCount2 = iCount2 + 2;
           }

        }
        printf("\n");
    }        
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

