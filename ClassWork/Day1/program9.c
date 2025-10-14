/*
Step 1:Understand the problem statment
Step 2:Writhe the Algoritham
Step 3:Decide the programming language
Step 4:Write the program
Step 5:Test the program
*/

/*
Algoritham

START
    Accept first number as No1
    Accept second number as No2
    if the input is negative than convert it into positive
    Perfome Addition of No1 & No2
    Display the Addition on Screen
STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;
    
    //updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    //updator
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2;   //Business logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is :%f\n",fRet);

    return 0;
}