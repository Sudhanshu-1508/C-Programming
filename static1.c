#include<stdio.h>

extern int no1;
extern int no2;
extern void demo();
int main()
{

    demo();
    printf("value of no1 : %d\n",no1);
    printf("value of no2 : %d\n",no2);
    return 0;
}