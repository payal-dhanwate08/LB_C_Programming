#include<stdio.h>


int CountOcuurence(char str[],char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;

    }
    return iCount;
    
}

int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;
   char cValue = '\0';

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr); 

   fflush(stdin);       //Not applicable on all os

   printf("Enter the charector :\n");
   scanf("%c",&cValue);
   
   iRet =  CountOcuurence(Arr,cValue);

   printf("Number of ocuurences of : %d\n",iRet);
    
    return 0;   
}