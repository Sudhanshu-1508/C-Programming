#include<stdio.h>

int AddR(int no)
{
    static int icnt =1;
    static int isum = 0;

    if(icnt<=no)
    {
        isum = isum + icnt;
        icnt++;
        AddR(no);
    }
    return isum;
}

int main()
{
    printf("Enter number");
    int iValue = scanf("%d",&iValue);

    int iRet = AddR(iValue);
    printf("Addition is : %d",iRet);
    return 0;
}