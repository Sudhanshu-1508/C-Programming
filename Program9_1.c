#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iCnt2 = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt2 = 0; iCnt2 <= iNo; iCnt2++)
    {
        printf("#\t");
    }
}

int main()
{

    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}