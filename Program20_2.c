#include<stdio.h>

void Display(int iRow1, int iColumn1)
{
    int i =0, j=0;
    
    for(i = 1; i <= iRow1; i++)
    {
        char ch1 = 'A';
        char ch2 = 'a';
        for(j = 1; j<= iColumn1; j++)
        {
            for(i=1; i <= iRow1; i++)
            {
                 if(i % 2 == 0)
                {
                    printf("%c\t",ch2);
                    ch2++;
                }
                else
                {
                    printf("%c\t",ch1);
                    ch1++;
            
                }
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