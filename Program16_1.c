#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iValue)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            break;
        }
        }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, i = 0;
    bool bRet = false;
    int *ptr = 0;
    int iNo = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter numbers\n");

    for(i = 0; i <iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter a number want to check\n");
    scanf("%d",&iNo);

    bRet = Check(ptr, iLength, iNo);

    if(bRet == true)
    {
        printf("%d is present",iNo);
    }
    else
    {
        printf("%d is not present",iNo);
    }


    free(ptr);

    return 0;
}