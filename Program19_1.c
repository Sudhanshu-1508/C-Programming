#include<stdio.h>

void Display(int iRow, int iCoulmn)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = 0; iCnt1 <= iCoulmn; iCnt1++)
    {
        for(iCnt2 = 0; iCnt2 <= iRow; iCnt2++ )
        {
            {
                printf("*\t");

            }
            printf("\n");
        }
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