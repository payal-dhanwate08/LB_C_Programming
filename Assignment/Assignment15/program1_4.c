#include<stdio.h>

int MultDigit(int iNo)
{
    int count = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        count = count * iDigit ;
        
       
        iNo = iNo / 10;   
    }
    return count;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}