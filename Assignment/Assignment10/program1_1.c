#include<stdio.h>
double CircleArea(float fRadius)
{
    float PI = 3.14;
    float fAreaOfCircle = PI * fRadius * fRadius;
    return fAreaOfCircle;

}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius  ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);


    return 0;
}