#include<stdio.h>



void Display(char ch)
{
    int Cap = 0;
    if ((ch <= 'z') && (ch >= 'a'))
    {
        Cap = ch - 32;
        printf("%c",Cap);
    }
    else
    {
        printf("%c",ch);
    }
   
}

int main()
{
    char cValue = '\0';
    
    printf("enter a character\n");
    scanf("%c",&cValue);

    Display(cValue);

    

    return 0;
}