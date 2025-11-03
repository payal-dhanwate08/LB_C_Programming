#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumofFact = 0;
    int iSumofNonFact = 0;
   
    if(iNo <=0)
    {
        iNo = -iNo;
    }

    for(iCnt =1 ; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumofFact = iSumofFact + iCnt;
            
        }
        else 
        {
            iSumofNonFact = iSumofNonFact + iCnt;
        }
        
    }
    return (iSumofFact - iSumofNonFact);

}
    


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet =FactDiff(iValue);
    printf("%d",iRet);


    

    return 0;

}