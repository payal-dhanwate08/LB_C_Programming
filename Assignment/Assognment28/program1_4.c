#include<stdio.h>

int  DisplyDigits(char str[])
{
     while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
           printf("%c",*str);
        }   
        str++;
    } 
}

int main()
{
    char Arr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    DisplyDigits(Arr);
    

    return 0;

}