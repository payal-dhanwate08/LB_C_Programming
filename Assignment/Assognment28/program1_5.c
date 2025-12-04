#include<stdio.h>

int  CountWhitSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    } 
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhitSpace(Arr);
    printf("%d\n",iRet);

    return 0;

}