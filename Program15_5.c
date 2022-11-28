#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Check(int Arr[], int iSize, int iValue)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iFreq++; 
        }

    }
    return iFreq;
}

int main()
{
    int iLength = 0, i = 0;
    int iRet = 0;
    int iNo = 0;
    int *ptr = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter numbers\n");

    for(i = 0; i <iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter a number whose frequency you want to find \n");
    scanf("%d",&iNo);

    iRet = Check(ptr, iLength, iNo);

    printf("Frequency of 11 is %d",iRet);
    free(ptr);

    return 0;
}