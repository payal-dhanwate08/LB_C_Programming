#include<stdio.h>

int  strCpySmall(char *str,char *dest)
{
    char *start = str;
   
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *dest = *str + 32;
        }
        else
        {
            *dest = *str;
        }
        dest++;
        str++;
      
    }
    
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];
    
    strCpySmall(Arr,Brr);

    printf("%s\n",Brr);

    return 0;

}