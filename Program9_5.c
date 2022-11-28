#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt1 = 1;
    int iCnt2 = 1;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        if(iCnt1 % 2 == 0)
        {
            iCnt1 = iEven;

        }

        if(iCnt1 % 2 != 0)
        {
            iCnt1 = iOdd;
        }   
    }
    

    /* 
    for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        if(iCnt2 % 2 != 0)
        {
            iOdd = iCnt2;
        }   
    }
    */

    // iDiff = iEven - iOdd;

    return iEven - iOdd;
}

int main()
{

    int iRet = 0;

    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("the difference between even and odd factorial is %d\n",iRet);

    return 0;
}