#include<stdio.h>

void FactorsI(int no)
{
    int icnt =1;
    for(icnt =1 ; icnt <= (no/2); icnt++)
    {
        if((no % icnt )==0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int value = 0;
    printf("Enter number\n");
    scanf("%d",&value);

    FactorsI(value);
    return 0;
}