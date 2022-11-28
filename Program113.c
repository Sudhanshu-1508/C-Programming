#include<stdio.h>
#include<stdbool.h>

bool CheckUpper(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = CheckUpper(cValue);
    if(bRet == true)
    {
        printf("%c is a upper case letter\n",cValue);
    }
    else
    {
        printf("%c is not a upper case letter\n",cValue);
    }

    return 0;
}