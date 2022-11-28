#include<stdio.h>
#include<stdlib.h>


int Smallest(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int *ptr = NULL;
    int i =0;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the nnumbers\n");
    for(i =0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Smallest(ptr, iLength);
    printf("%d is the smallest number\n", iRet);

    free(ptr);

    return 0;
}