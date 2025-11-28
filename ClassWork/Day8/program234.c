#include<stdio.h>

void CountSpace(char str[])
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
    printf("number of  Spaces :%d\n",iCount);
}   

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr); 

   CountSpace(Arr);
    
    return 0;   
}