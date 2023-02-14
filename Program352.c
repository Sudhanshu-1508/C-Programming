#include<stdio.h>

int FactR(int no)
{
    static int icnt =1;
    static int ifact = 1;

    if(icnt<=no)
    {
        ifact = ifact * icnt;
        icnt++;
        FactR(no);
    }
    return ifact;
}

int main()
{
    printf("Enter number\n");
    int iValue = scanf("%d",&iValue);

    int iRet = FactR(iValue);
    printf("Factorial is : %d",iRet);
    return 0;
}