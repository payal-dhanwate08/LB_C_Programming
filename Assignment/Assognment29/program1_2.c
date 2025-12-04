#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        return iCount;
    }
    
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

    iRet = CountChar(Arr ,cValue);

    printf("Chrector frquency is :%d",iRet);

    return 0;
}