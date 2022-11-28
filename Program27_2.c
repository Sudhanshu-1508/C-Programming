#include<stdio.h>


int ChkChar(char *str, char ch)
{
    
    int iFreq = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iFreq++;
        }
        str++;
    }
    return iFreq;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter a charater\n");
    scanf("%s",&cValue);

    iRet = ChkChar(arr, cValue);

    printf("The frequency of %c is %d",cValue,iRet);

    return 0;
}