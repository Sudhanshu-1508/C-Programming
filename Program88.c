#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';


    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
        
    }

  
}

int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}