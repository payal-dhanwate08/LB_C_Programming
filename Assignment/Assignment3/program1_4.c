#include<stdio.h>
void DisplayConver( char cValue)
{
    if(cValue>='A' && cValue <='Z')
    {
        cValue = cValue + 32;
        printf("%c",cValue);
    }
    
    else if(cValue>='a' && cValue <='z')
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter cahracter\n");
    scanf("%c",&cValue);
    DisplayConver(cValue);




    return 0;

}