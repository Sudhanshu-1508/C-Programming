#include<stdio.h>

int AdditionI(int no)
{
    int icnt = 0;
    int isum = 0;
    
    while(icnt<=isum)
    {
        isum = isum + icnt;
        icnt++;
    }
    return isum;
}

int main()
{
    printf("Enter a number\n");
    int iValue = scanf("%d",&iValue);

    int iRet = AdditionI(iValue);
    printf("Additon is : %d",AdditionI(iValue));
    return 0;
}