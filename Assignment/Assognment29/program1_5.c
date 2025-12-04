#include<stdio.h>

int  strRevX(char *str)
{
    char *start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++; 
    }

    End--;
    while(start < End)
    {
       temp = *start;
       *start = *End;
       *End = temp;
       start++;
       End--;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);
    printf("%s\n",Arr);

    return 0;

}