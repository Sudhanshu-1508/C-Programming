#include<stdio.h>

char ToUpperX(char ch)
{
    return ch - 32;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter a cahracter\n");
    scanf("%d",&cValue);

    cRet = ToUpperX(cValue);
    printf("%c",cRet);

    return 0;
}