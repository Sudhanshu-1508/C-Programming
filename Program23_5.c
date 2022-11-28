#include<stdio.h>



void Display(char ch)
{
   
    if ((ch <= 'D') && (ch >= 'A'))
    {
        if(ch == 'A')
        {
            printf("Your exam time is 7 AM\n");
        }
        if(ch == 'B')
        {
            printf("Your exam time is 8 AM\n");
        }
        if(ch == 'C')
        {
            printf("Your exam time is 9:20 AM\n");
        }
        if(ch == 'D')
        {
            printf("Your exam time is 10:30 AM\n");
        }
        
    }
    else
    {
        printf("Please enter a valid division\n");
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