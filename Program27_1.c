#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in the string\n",cValue);
    }
    else
    {
        printf("%c is not present in the string\n",cValue);
    }

    return 0;
}