#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo1)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo1)
        {
            iFreq++;
        }
    }


    return iFreq;

}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int i = 0;
    int *ptr = NULL;
    int iNo = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements \n");

    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the nnumber whose frequecy you want to calculate ");
    scanf("%d",&iNo);

    iRet = Frequency(ptr, iLength, iNo);

    printf("Frequency of %d is %d", iNo, iRet);

    free(ptr);


    return 0;
}