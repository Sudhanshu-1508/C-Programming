#include<stdio.h>

/// @brief 
/// @param str 
void Display(char *str)
{

    if(*str !=0)
    {
        printf("%s \n",str);
        str++;
        Display(str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}