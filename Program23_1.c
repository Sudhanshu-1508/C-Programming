#include<stdio.h>
#include<stdbool.h>

bool Check(char ch)
{
    
    if(((ch <= 'Z') && (ch >= 'A')) || ((ch <= 'z') && (ch >= 'a')) )
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
    bool bRet = false;
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%d",&cValue);

    bRet = Check(cValue);

    if(bRet == true)
    {
        printf("It is a alphabet\n");
    }
    else
    {
        printf("It is not a alphabet\n");
    }

    
    return 0;
}