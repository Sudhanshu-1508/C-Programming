#include<stdio.h>
#include<stdlib.h>


void Display3Digit(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        for(iCnt = 0; iDigit = Arr[iCnt] % 10;)

        {iNo++;}
        if(2 < iNo < 4)
       {
        printf("%d is the digit number \n ",Arr[iCnt]);
       }   
    }
   
}

int main()
{
    int iLength = 0;
    
    int *ptr = NULL;
    int i =0;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the nnumbers\n");
    for(i =0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display3Digit(ptr, iLength);
   
    free(ptr);

    return 0;
}