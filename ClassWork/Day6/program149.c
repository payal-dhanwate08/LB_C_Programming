#include<stdio.h>
#include<stdlib.h>


typedef int * IPTR;

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iValu1 = 11;
    int iValue2 = 21;

    printf("Befor swap : %d %d\n",iValu1,iValue2);

    Swap(&iValu1,&iValue2);

    printf("After swap : %d %d\n",iValu1,iValue2);

    return 0;
}
