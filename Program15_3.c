#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

int main()
{
    int iLength = 0, i = 0;
    bool bRet = false;
    int *ptr = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter numbers\n");

    for(i = 0; i <iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = Check(ptr, iLength);

    if(bRet == true)
    {
        printf("11 is present in the array");
    }
    else
    {
        printf("11 is not present in the array");
    }

    free(ptr);

    return 0;
}