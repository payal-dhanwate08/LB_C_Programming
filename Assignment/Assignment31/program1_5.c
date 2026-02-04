#include<stdio.h>

void Display()
{
    static char Cnt ='a';
    if(Cnt <= 'f')
    {
      printf("%c\t",Cnt);
      Cnt++;

    }
    Display();
    printf("\n");

}
int main()
{
    Display();

    return 0;

}