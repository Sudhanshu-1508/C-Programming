/*
    STEPS
    Step 1 : Understand the problem statement 
    Step 2: Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program

*/

// Accept N numbers from user and perform the addition

//Value of N = 5
//Values : 10  20   30  40   50

//output
//Addtion is : 150

//Algorithm
/*
    START
       
        Accept the number of elements from user
        Allocate the memory to store that number
        Accept the numbers from user
        Perform addition of all numbera
        Display the addition

    END

*/


#include<stdio.h>    //for printf and scanf
#include<stdlib.h>    // for malloc and free

////////////////////////////////////////////
//
// Application Name : Addition of N numbers
// Input : N numbers
// Output : Addition
// Author : Sudhanshu Shashank kulkarni
// Date : 18 September 2022
//
//////////////////////////////////////////

int main()
{
    int *Arr = NULL;   //Pointer to hold the address of array
    int iSize = 0;    // variable to hold size of array
    register int i = 0;     // variable to hold size of array
    int iSum = 0;   //to hold the addition

    printf("Enter the number of elements you want\n");
    scanf("%d",&iSize);

    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Dynamic memory allocation successful\n");

    printf("Enter the elements\n");

    //    1       2        3
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);   //4
    }


    // Perform Addition

    //   1       2        3
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];   //4
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("memory de-allocation done\n");

    return 0;
}
