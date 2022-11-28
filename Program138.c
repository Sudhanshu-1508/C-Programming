#include<stdio.h>
#include<stdlib.h>

void TwoMin(int *Arr, int iSize)
{
    int iCnt = 0, iCnt2 = 0;
    int iMin1 = Arr[0];
    int iMin2 = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin1)
        {
            iMin1 = Arr[iCnt];
        }
    } 
    for(iCnt2 = 0; iCnt2 < iSize; iCnt2++)
    {
        if(Arr[iCnt2] < iMin1)
        {
            iMin2 = Arr[iCnt2];
        }
    }
    printf("%d%d",iMin1,iMin2);
}


int main()
{
    int iValue = 0;
    int i = 0;
    int *ptr = NULL;


    printf("enter number of elements\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iValue);

    printf("Enter the elements\n");
    for(i = 0; i < iValue; i++)
    {
        scanf("%d",&ptr[i]);
    }

    TwoMin(ptr, iValue);    
    return 0;
}