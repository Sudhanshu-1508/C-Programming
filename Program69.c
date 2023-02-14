#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize ,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int *ptr = NULL;
    int iLength = 0, i = 0;
    int iValue = 0;
    bool bRet = 0;

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

    printf("Enter the number want to check\t");
    scanf("%d",&iValue);

    // Step 4 : Call the function

    bRet = CheckNumber(ptr, iLength, iValue);

    if(bRet = true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present:\n",iValue);
    }
   
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}