#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        iCnt++;

        str++;
    }
    return -1;
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
   

    printf("enter string :");
    scanf("%[^'\n]s",Arr);

    printf("Enter the charector :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr ,cValue);

    printf("Chrector Location is :%d",iRet);

    return 0;
}