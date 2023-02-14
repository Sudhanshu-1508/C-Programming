#include<stdio.h>
#include<stdlib.h>

int main()
{

    int Arr[5];
    int iCnt = 0;

    printf("Enter elements");
    // scanf("%d",&i);

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elemets from array are :\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }

    return 0;
}