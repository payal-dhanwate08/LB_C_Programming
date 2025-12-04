#include<stdio.h>

int  strCpyCap(char *str,char *dest)
{
    char *start = str;
   
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *dest = *str - 32;
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
    
    strCpyCap(Arr,Brr);

    printf("%s\n",Brr);

    return 0;

}