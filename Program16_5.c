#include<stdio.h>
#include<stdlib.h>

int Mult(int Arr[], int iSize)
{
    int iCnt =0;
    int iMulti =1;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMulti = iMulti * Arr[iCnt];
        }
    }
    return iMulti;
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



    iRet = Mult(ptr, iLength);

    printf("Multiplication is %d", iRet);

    free(ptr);


    return 0;
}