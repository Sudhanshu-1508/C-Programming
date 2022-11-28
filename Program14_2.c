#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d is divisible by 5\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0;
    int i = 0;
    int *ptr = NULL;

    printf("ENter number of elements");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}