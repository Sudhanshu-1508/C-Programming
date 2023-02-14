#include<stdio.h>
#include<stdbool.h>
bool FactorsR(int no)
{
    static int icnt = 1;
    static int sum = 0;
    if(icnt <= no)
    {
        if(((no % icnt))==0)
        {
            sum = sum + icnt;   
        }
        icnt++;
        FactorsR(no);    
    }
    if(sum == no)
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
    int value = 0;
    bool bret = 0;
    printf("Enter a number \n");
    scanf("%d",&value);

    bret = FactorsR(value);
    
    if(bret == true)
    {
        printf("Given number is perfect number\n");
    }
    else
    {
        printf("Given number is not a perfect number\n");
    }
    return 0;
}