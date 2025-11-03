#include<stdio.h>
int FindMax(int a , int b)
{
    if(a<=0)
    {
        a= -a;
    }
    if(b<=0)
    {
        b= -b;
    }
    if(a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int num1 =0 , num2 = 0 , result = 0;
    printf("Enter two numbers : " );
    scanf("%d %d",&num1 , &num2);

    result = FindMax(num1 , num2);
    printf("Maximum is :%d\n",result);
    
    return 0;

}
