#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
    int iCnt =0, i = 0;
    while(str[i] != '\0')
    {
        iCnt ++;
        i++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter your string \n");

    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of characters are : %d",iRet);

    return 0;
}
