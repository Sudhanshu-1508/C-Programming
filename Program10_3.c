#include<stdio.h>

double Convert(float fNo)
{
    double dCoversion = fNo * 1000;

    return dCoversion;
}


int main()
{

    float fValue = 0;
    double dRet = 0;

    printf("Enter kilometers\n");
    scanf("%f",&fValue);

    dRet = Convert(fValue);

    printf("%lf",dRet);

    return 0;
}