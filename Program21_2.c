#include<stdio.h>

void Display(int iRow1, int iColumn1)
{
    int i =0, j=0, iNo =1, iMult1 = 0, iMult2= 0;
    for(i = 1; i <= iRow1; i++)
    {
        for(j = 1; j<= iColumn1; j++)
        {
            if(i % 2 != 0)
            {
                iMult1= iMult1 + 2;
                printf("%d\t",iMult1);
            }
            else
            {
                iMult2 = iMult2 + 2;
                printf("%d\t",iMult2);
            }
        }
    printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    
    return 0;
}