#include<stdio.h>

double Convert(float fNo)
{
    double dConversion = 0.0;

    dConversion = 0.0929 * fNo;

    return dConversion;
}

int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in Sq.Ft\n");
    scanf("%f",&fValue);

    dRet = Convert(fValue);

    printf("%lf",dRet);

    return 0;
}