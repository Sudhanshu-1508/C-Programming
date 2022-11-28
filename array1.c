#include<stdio.h>

int main()

{
    int Arr[4] = {10,20,30,40};


    int Brr[]= {10,20,30,40};


    int Crr[4];
    Crr[0]=10;
    Crr[3]=20;
    

    printf("%d\n",Crr[0]);
    printf("%d\n",Crr[1]);
    printf("%d\n",Crr[2]);
    printf("%d\n",Crr[3]);

    return 0;
}