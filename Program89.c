#include<stdio.h>

void Display(int iRow1, int iCoulmn1)     //time complexity = N^2
{
    int iCnt = 0;
    int i = 0;

    if(iRow1 < 0)
    {
        iRow1 = -iRow1;
    }

    if(iCoulmn1 < 0)
    {
        iCoulmn1 = -iCoulmn1;
    }

    for(iCnt = 1; iCnt <= iRow1; iCnt++)
    {
        for(i = 1; i <= iCoulmn1; i++)
        {
            printf("*\t");
        }
        printf("\n");
    }

  
}

int main()
{
    int iColumn = 0;
    int iRow = 0;

    printf("Enter rows:\n");
    scanf("%d",&iRow);

    printf("Enter a columns:\n");
    scanf("%d",&iColumn);

  
    Display(iRow, iColumn);
  
    return 0;

}