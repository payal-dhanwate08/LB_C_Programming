#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    printf("%d",Arr);
    printf("%d\n",&Arr);
    printf("%d\n",&(Arr[0]));

    printf("%u",sizeof(Arr));

    return 0;
}




