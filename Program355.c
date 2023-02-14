#include<stdio.h>

int FactorsR(int no)
{
    static int icnt = 1;
    static int sum = 0;
    if(icnt <= no)
    {
        if((icnt <= (no/2))==0)
        {
            sum = sum + icnt;   
        }
        icnt++;
        FactorsR(no);
        
    }
    return sum;
}

int main()
{
    int value = 0;
    int iret = 0;
    printf("Enter a number \n");
    scanf("%d",&value);

    iret = FactorsR(value);
    printf("addition of factors is : ",iret);
    return 0;
}