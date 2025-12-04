#include<stdio.h>

int  strCpyX(char *str,char *dest)
{
    char *start = str;
   
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];
    
    strCpyX(Arr,Brr);

    printf("%s\n",Brr);

    return 0;

}