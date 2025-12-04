#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL DisplayShedule(char ch)
{
    
    if(ch == 'A')
    {
        printf("Exam at 7 AM");
    }
    else if(ch == 'B')
    {
        printf("Exam at 8 AM");
    }
    else if(ch == 'C')
    {
        printf("Exam at 9 AM");
    }
    else if(ch == 'D')
    {
        printf("Exam at 10 AM");
    }
    else
    {
        printf("Invalide Division");
    }
}

int main()
{
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("enter the Division :");
    scanf("%c",&cValue);

    bRet = DisplayShedule(cValue);

    return 0;
}