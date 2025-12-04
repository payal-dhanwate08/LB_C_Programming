#include<stdio.h>

int  strCopyRevX(char *str,char *dest)
{
    char *start = str;
   
    while(*str != '\0')
    {
        str++; 
    }

    str--;

    while(str >= start)
    {
        *dest = *str;
        dest++;
        str--;
    }
    
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];
    
    strCopyRevX(Arr,Brr);

    printf("%s\n",Brr);

    return 0;

}