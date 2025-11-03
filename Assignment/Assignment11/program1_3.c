#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
   
    int iCnt = 0;
    int iCount = 0;
    if(iStart > iEnd ) 
    {
        printf("Invalid range");
        return 0;
    }
    if(iStart<0 || iEnd<0) 
    {
        printf("Invalid range");
        return 0;
    }
    for(iCnt= iStart ; iCnt<=iEnd ; iCnt++)
    {
        iCount = iCount + iCnt;
        
    }
    return iCount;
}
int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet = 0;
    printf("Enter starting point ");
    scanf("%d",&iValue1);

    printf("Enter ending point ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    if(iRet != 0)
    {
      printf("Addition is %d ",iRet);
    }


    return 0;

}