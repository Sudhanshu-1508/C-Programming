#include<stdio.h>
#include<stdbool.h>

// % "mod"
// == "equality"

bool CheckEven(int iNo)
{
    int iAns = iNo %2;
    if(iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("It is even\n");
    }
    else
    {
        printf("It is odd");
    }
    return 0;
}
