#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[50];

    printf("Enter your full name \n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);
}