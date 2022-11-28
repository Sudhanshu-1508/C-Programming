#include<stdio.h>

double Area(float fRadius)
{
    double dArea = 0;

    dArea = (3.14 * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.02;
    double dRet = 0.0;

    printf("Enter Radius");
    scanf("%f",&fValue);

    

    dRet = Area(fValue);

    printf("Area is %lf",dRet);

    return 0;
}