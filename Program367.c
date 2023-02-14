#include<stdio.h>

void Display(int Arr[] , int iSize)
{
    int icnt = 0;

    for(icnt = 0; icnt < iSize; icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }

}

int main()
{
    int Brr[5] = {10,20,30,30,50};


    Display(Brr,5);
    return 0;
}