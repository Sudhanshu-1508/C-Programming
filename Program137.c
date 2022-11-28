#include<stdio.h>

void strrev(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }
}

int main()
{
    char ch[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",ch);

    strrev(ch);

    printf("Reverse string is : %s\n",ch);

    return 0;
}