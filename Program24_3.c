#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    
    if ((ch <= 'Z') && (ch >= 'A'))
    {
       for(ch; (ch <= 'Z') && (ch >= 'A'); ch++ )
       {
        printf("%c\t",ch);
       } 
       

    }
    if((ch <= 'z') && (ch >= 'a'))
    {
        for(ch; (ch <= 'z') && (ch >= 'a'); ch-- )
       {
        printf("%c\t",ch);
       } 
    }
    else
    {
        printf("  ");
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