#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
    int i = 0;
    
    for(i = 0; str[i] != 0; i++)
    {
        iCnt++;
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
