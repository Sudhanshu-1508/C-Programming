#include<stdio.h>

int CapCount(char *str)
{
    int iCnt = 0;
    int iCap = 0;
    while(*str != '\0')
    {
        if((*str <= 'Z') && (*str >= 'A'))
        {
            iCap++;
        }
        iCnt++;
    }
    return iCap;
}

int main()
{
    int iRet = 0;
    char Arr[30];

    printf("enter a string\n");
    scanf("%[^ '\n']s",Arr);

    iRet = CapCount(Arr);

    printf("there are %d capital letters\n",iRet);
    return 0;
}