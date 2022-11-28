#include<stdio.h>
#include<stdbool.h>


bool Display(char ch)
{
   
    if ((ch <= 'Z') && (ch >= 'A'))
    {
        return true;
    }
    else
    {
        return false;
    }
   
}

int main()
{
    char cValue = '\0';
    bool bRet = 0;
    
    printf("enter a character\n");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    if(bRet == true)
    {
        printf("%c is capital letter\n");
    }
    else
    {
        printf("%c is not an alphabet\n");
    }

    return 0;
}