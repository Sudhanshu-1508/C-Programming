#include<stdio.h>
#include<stdbool.h>

bool CountCh(char *str, char ch)
{

    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }        
        str++;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    char Arr[30];
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a letter\n");
    scanf(" %s",&cValue);

    bRet = CountCh(Arr, cValue);

    if(bRet == true)
    {
        printf("%c is present in the string",cValue);
    }
    else
    {
        printf("%c is not present in the string",cValue);
    }

    return 0;
}