#include<stdio.h>

void Display(int iNo)
{
    int iMult = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = 2 * iCnt;
        printf("%d\t",iMult); 
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}