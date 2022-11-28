#include<stdio.h>

double RectArea(float fNo1, float fNo2)
{
    double dArea = 0;

    dArea = fNo1 * fNo2;

    return dArea;
}

int main()
{

    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;


    printf("Enter Length\n");
    scanf("%f",&fValue1);

    printf("Enter Width\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%lf",dRet);


    return 0;
}