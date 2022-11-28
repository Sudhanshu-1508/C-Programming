#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 3 == 0 & Arr[iCnt] % 5 == 0)
        {
            printf("%d is divisible by both 5 & 3 \n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0;
    int i = 0;
    int *ptr = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please enter the numbers\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}