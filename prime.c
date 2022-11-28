#include<stdio.h>


int Prime(int iCheck)
{
    int iC2;

    for (iC2=2 ; iC2 < iCheck ; iC2++)
    {
        if (iCheck%iC2 == 0)
        return 0;
    }
    return 1;
}

int main()
{
    int iNum = 0;
    int iResult = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNum);

    iResult =  Prime(iNum);

    if (iResult == 1)
        printf("%d  is prime \n",iNum);
    else
        printf("%d is composite \n",iNum);
    return 0;
}