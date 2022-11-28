#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}


int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iValue = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number to find out its frequency\t");
    scanf("%d",&iValue);

    // Step 4 : Call the function

    iRet = CalculateFrequency(ptr, iLength, iValue);

    printf("frequency of %d is %d", iValue, iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}