#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0, iDigit = 1;
    for(iCnt = 0; iDigit >= iNo; iCnt--)
    {
        printf("%d \t #",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}