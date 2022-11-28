#include<stdio.h>

int CountCh(char str[], char ch1)
{
    int iCnt = 0;
    int iChk = 0;

    while(str[iCnt] != '\0')
    {
        if((*str == ch1))
        {
            iChk = str[iCnt];
        }
        iCnt++;
    }
    return iChk;
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

    printf("first occurance of %c is : %d\n",ch, iRet);

    return 0;
}