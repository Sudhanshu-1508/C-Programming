#include<stdio.h>

int main()
{
    int no = 10;
    const int no2 = 10;
    int x = no2++;
    int y = no++;
    printf("%d\n",y);
    printf("%d\n",no);
    printf("%d\n",no2);
    printf("%d\n",x);
    return 0;
}