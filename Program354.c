#include<stdio.h>

void FactorsR(int no)
{
    static int icnt = 1;

    if(icnt <= no)
    {if((icnt <= (no/2))==0)
    {
        printf("%d",icnt);    
        icnt++;
        FactorsR(no);
    }
    }
}

int main()
{
    return 0;
}