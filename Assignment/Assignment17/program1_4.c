#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending point: ");
    scanf("%d",&iValue2);


    p = (int *)malloc(iSize * sizeof(int));

    if (NULL == p)
    {
        printf("unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize ,iValue1 ,iValue2);

    free(p);

    return 0;
}






//insert into values(1,'Amit','Pune',21,90),(2,'sagar','Mumbai',23,89),(3,'sumit','Nashik',23,78),(4,'Pooja','Nashik',21,89),(5,'Pooja','Nashik',21,89),(6,'Pranali','Nashik',24,80),(7,Parag','Nagar',20,57),(8,'poorva','Nagpur',27,67),(9,'Ramesh','Pune',20,78),(10,'Rahul','Pune',26,90),(11,'Bhavesh','Mumbai',20,98),(12,'Chetan','Nashik',26,56),(13,'Deven','Satara',24,90),(14,'Gaurav','Dhule',23,89),(15,'Hemant','Mumbai',20,98),(16,'Radhika','Mumbai',29,67),(17,'Riya','sangli',26,50),(18,'Gautam','satara',24,45),(19,'yuraj','Aurangabad',30,77),(20,'Pratik','Shirdi',21,91);