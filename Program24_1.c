#include<stdio.h>

void ASCII(char ch)
{
    printf("Decimal value of %c is %d\n",ch,ch);
    printf("Hexadecimal value of %c is %x\n",ch,ch);
    printf("Octal value of %c is %o\n",ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    ASCII(cValue);

    return 0;
}