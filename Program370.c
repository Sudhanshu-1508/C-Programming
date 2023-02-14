#include<stdio.h>

int Sum(int Arr[] , int iSize)
{
    static int icnt = 0;
    static int sum =0;
    if(icnt <iSize)
    {
        printf("%d\n",Arr[icnt]);
        sum = sum + Arr[icnt];
        icnt++;
        Sum(Arr, iSize);
    }
    return sum;
}

int main()
{
    int Brr[5] = {10,20,30,30,50};


    int i =0;
    i = Sum(Brr,5);
    printf("Additon of all elements in the array is : %d",i);
    return 0;
}