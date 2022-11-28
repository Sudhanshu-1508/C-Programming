#include<stdio.h>
#include<stdlib.h>

int Index(int Arr[], int iSize, int iValue)
{
    int iCnt = 0, iDig = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iCnt = iDig;
        }
        
    }
    if(iDig = iSize)
    {
        return -1;
    }
    else
    {
        return iDig;
    }
}


int main()
{
    int iLength = 0, i = 0;
    int iRet =0;
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

    iRet = Index(ptr, iLength, iNo);

    if(iRet == -1)
    {
        printf("%d is not present in the array \n", iNo);
    }
    else

    {printf("The index of %d is %d",iNo, iRet);}


    free(ptr);

    return 0;
}