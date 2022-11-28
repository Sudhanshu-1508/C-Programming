#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a String\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("white spaces are : %d\n",iRet);

    return 0;
}