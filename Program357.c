#include<stdio.h>

int CountDigitR(int no)
{
    static int iSum = 0;
    int iDigit =0;

    if(no != 0)
    {
        iDigit =  no %10;
        iSum = iSum + iDigit;
        no = no /10;
        CountDigitR(no);
    }
    return iSum;
}

int main()
{
    printf("Enter a number\n");
    int i = scanf("%d",&i);

    printf("Addition is : %d ",CountDigitR(i));
    return 0;
}