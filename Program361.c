#include<stdio.h>

int strlen(char *str)
{
    int icnt = 0;

    while(*str !=0)
    {
        icnt++;
        str++;
    }
    return icnt;
}

int main()
{
    char Arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    int iRet = strlen(Arr);

    printf("Number of elements in the string are : ",iRet);

    return 0;
}