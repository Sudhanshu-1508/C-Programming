#include<stdio.h>

int strlen(char *str)
{
    static int icnt = 0;

    if(*str !=0)
    {
        icnt++;
        str++;
        strlen(str);
    }
    return icnt;
}

int main()
{
    char Arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    int iRet = strlen(Arr);

    printf("Number of elements in the string are : %d ",iRet);

    return 0;
}