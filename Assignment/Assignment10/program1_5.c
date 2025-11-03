#include<stdio.h>
double SquareMeter(int  iValue)
{
    double SQMeter = 0.0;
    SQMeter = iValue * 0.0929;
    return  SQMeter ;
}
int main()
{
    int iValue = 0 ;
    double dRet = 0.0;
    printf("Enter area in square feet  ");
    scanf("%f",&iValue);

    dRet = SquareMeter(iValue);
    printf("Square meter is  : %lf ",dRet);
    return 0;
}