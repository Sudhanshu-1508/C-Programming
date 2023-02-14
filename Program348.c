#include<stdio.h>

void DisplayR(int no)
{
    static int iCnt =1;

    if(iCnt <= no)
    {
        printf("*\t");
        iCnt++;
        DisplayR(no);  //Recursive call
    }
}

int main()
{
   int iValue =0;
   printf("enter the number\n");
   scanf("%d",&iValue);

    DisplayR(iValue);;
    
    printf("\nEnd of main\t");

    return 0;
}