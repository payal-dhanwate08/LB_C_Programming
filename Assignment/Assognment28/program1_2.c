#include<stdio.h>

int  strluprX(char str[])
{
     while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           *str = *str - 32;
        }     
        str++;
    } 
}

int main()
{
    char Arr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    strluprX(Arr);
    printf("%s\n",Arr);

    return 0;

}