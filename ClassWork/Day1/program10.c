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

///////////////////////////////////////////////////////////////////////
//
// Required Header files
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers 
//  Description :   It is use to to perfom Addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Payal Dattatray Dhanwate
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////////
//
//  Testcasses succesfully Handaled by the application
//
//  Input1 : 10.5   Input1 : 3.2    Output : 13.7         
//  Input1 : -10.5  Input1 : 3.2    Output : 13.7 
//  Input1 : 10.5   Input1 : -3.2   Output : 13.7
//  Input1 : -10.5  Input1 : -3.2   Output : 13.7
//  Input1 : 10.5   Input1 : 3.2    Output : 13.7
//
/////////////////////////////////////////////////////////////////////