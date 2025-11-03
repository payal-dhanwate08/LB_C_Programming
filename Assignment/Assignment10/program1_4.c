#include<stdio.h>
double FhtoCs(float dTemp)
{
    double dCelcius = 0.0;
    dCelcius = (dTemp - 32)*(5.0/9.0);
    return dCelcius;
}
int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheitn  ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("temperature in celsius : %lf ",dRet);
    return 0;
}