#include<stdio.h>

double Convert(float fNo)
{

    double dConversion = 0.0;

    double dValue = 0.0;

    dConversion = (fNo - 32);

    dValue = dConversion  * (5/9);

    return dValue;
}

int main()
{

    float fValue = 0;
    double dRet = 0;

    printf("Enter Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = Convert(fValue);

    printf("%lf",dRet);

    return 0;
}