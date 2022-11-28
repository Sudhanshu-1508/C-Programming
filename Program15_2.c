#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iEven =0, iOdd = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        if(Arr[iCnt] % 2 != 0)
        {
            iOdd++;
        }
    } 
    return (iEven - iOdd);
}


int main()
{
    int iLength = 0;
    int iRet = 0;
    int i = 0;
    int *ptr = NULL;
    

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements \n");

    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }



    iRet = Difference(ptr, iLength);

    printf("Difference is %d", iRet);

    free(ptr);

    return 0;
}