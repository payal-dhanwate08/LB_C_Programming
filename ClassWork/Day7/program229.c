#include<stdio.h>


int CountCpital(char str[])
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

   iRet =  CountCpital(Arr);

   printf("Number of Capital charectors are : %d\n",iRet);
    
    return 0;   
}