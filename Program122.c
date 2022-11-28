#include<stdio.h>

int CountCh(char *str, char ch1)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == ch1))
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
    char ch = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter a character\n");
    scanf(" %c",&ch);

    
    iRet = CountCh(Arr, ch);

    printf("Frequency of %c is : %d\n",ch, iRet);

    return 0;
}