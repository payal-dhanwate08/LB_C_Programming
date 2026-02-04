#include<stdio.h>

void Display()
{
    static char Cnt ='A';
    if(Cnt <= 'F')
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