#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <='Z'))
        {
           *src = *src + 32; 
        }
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter a string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is : %s",Brr);

    return 0;
}