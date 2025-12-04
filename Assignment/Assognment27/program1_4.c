#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
        (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        str++;

    }
    return FALSE;
    
}

int main()
{
    char Arr[20];

    BOOL bRet = FALSE;

    printf("enter string :");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("it Contain vowel");
    }
    else
    {
        printf("it not contain vowel ");
    }


    return 0;
}