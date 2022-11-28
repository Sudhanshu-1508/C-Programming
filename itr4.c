#include<stdio.h>

int main()
{
    int iCnt = 0;    
    iCnt = 1;  //1  
    do   //2
    {
        printf("Ok GOOGLE\n");  //4
        iCnt++;  //3
    }while (iCnt < 4);
    
    return 0;
}