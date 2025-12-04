#include<stdio.h>

int  Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }
    return iSmall - iCapital;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);


}