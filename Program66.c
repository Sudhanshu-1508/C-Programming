#include<stdio.h>
#include<stdlib.h>


void DisplayEvenOddCnt(int Brr[], int iSize1)
{
    int iCnt1 = 0, iEvenCnt = 0, iOddCnt = 0;

    for(iCnt1 = 0; iCnt1 < iSize1; iCnt1++)
    {
        if((Brr[iCnt1]) % 2 == 0)
        {
            iEvenCnt++;

            

        }
        else
        {
            iOddCnt++;
            
        }
        printf("Even Number of even %d\n",iEvenCnt);
        printf("Even Number of odd %d\n",iEvenCnt);
    }    
}


int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

// Step 1 : Accept size of array

    printf("Enter number of elements \n");
    scanf("%d",&iLength);

//Step 2 : allocate the memory

    ptr = (int *)malloc(iLength * sizeof(int));

// Step 3 : accept the elements

    printf("Enter the elements\n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

// Step 4 : Call the function

    



    DisplayEvenOddCnt(ptr, iLength);
//Step 6 : Deallocate the memory

    free(ptr);

    return 0;
}