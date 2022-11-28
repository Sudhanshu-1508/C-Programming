#include<stdio.h>

int DollartoRuppee(int iNo)
{
    int iConversion = 0;

    if(iNo > 0)
    {
        iConversion = 70 * iNo;
    }
     
    return iConversion;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter USD : \n");
    scanf("%d",&iValue);

    iRet = DollartoRuppee(iValue);

    printf("Value of Dollar to Rupee %d\n",iRet);
    return 0;
}