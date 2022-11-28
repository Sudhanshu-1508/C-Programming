#include<stdio.h>

void Display(int iRow1, int iColumn1)
{
    int i =0, j=0;
    for(i = 1; i <= iRow1; i++)
    {
        for(j = 1; j<= iColumn1; j++)
        {
            if(i < j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
    printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iColumn = 0;

    printf("Enter Row\n");
    scanf("%d",&iRow);

    printf("Enter column\n");
    scanf("%d",&iColumn);

    Display(iRow, iColumn);

    return 0;
}