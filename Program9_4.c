#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 1;
    int iNo1 = 1;


    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iNo1 = iCnt * iNo1;
        }
    }
    return iNo1;
}

int main()
{
    int iRet = 0;

    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Multiplication of odd factorial is %d\n",iRet);    
    
    return 0;
}