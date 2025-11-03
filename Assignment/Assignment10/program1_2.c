#include<stdio.h>
double ReactArea(float fWidth , float fHeight)
{
    
    float fAreaOfRectangle = fWidth * fHeight;
    return fAreaOfRectangle;

}


int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width  ");
    scanf("%f",&fValue1);
    printf("Enter height  ");
    scanf("%f",&fValue2);


    dRet = ReactArea(fValue1 , fValue2);


    printf("Area of rectangle : %f",dRet);


    return 0;
}