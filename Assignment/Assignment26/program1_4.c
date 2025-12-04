#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpacial(char ch)
{
    while(ch != '\0')
    {
        if(ch == '!' || ch == '$' || ch == '@' || ch == '%' || ch == '^' || ch == '&' || ch == '#' || ch == '*')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("enter the charector :");
    scanf("%c",&cValue);

    bRet = ChkSpacial(cValue);

    if(bRet == TRUE)
    {
        printf("it is Spacial charector");
    }
    else
    {
        printf("it is not Spacial charector");
    }


    return 0;
}