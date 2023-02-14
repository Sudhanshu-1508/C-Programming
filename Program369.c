#include<stdio.h>

void Display(int Arr[] , int iSize)
{
    static int icnt = 0;

    if(icnt <iSize)
    {
        printf("%d\n",Arr[icnt]);
        icnt++;
        Display(Arr, iSize);
    }

}

int main()
{
    int Brr[5] = {10,20,30,30,50};


    Display(Brr,5);
    return 0;
}