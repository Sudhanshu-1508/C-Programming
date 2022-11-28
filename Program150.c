#include<stdio.h>

int main()
{
    char ch[30];

    printf("Enter a string\n");
    scanf("%[^\n]s",ch);

    printf("%s",ch);

    return 0;
}