#include<stdio.h>
#include<stdbool.h>


bool Display(char ch)
{
   
    if ((ch <= '9') && (ch >= '0'))
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
        printf("%c is a number\n");
    }
    else
    {
        printf("%c is not a number\n");
    }

    return 0;
}