#include<stdio.h>

void Display(int iNo)
{
    char ch = 'A';
    
        printf("%c",ch);
        ch++;
    
}

int main()
{

    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}