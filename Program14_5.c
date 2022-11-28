#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d is multiple of 11\n", Arr[iCnt]);
        }
    }
}

int main()
{

    int iLength = 0;
    int i = 0;
    int *ptr = 0;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("ENter the elemetns\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}