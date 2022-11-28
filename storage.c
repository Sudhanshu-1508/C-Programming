#include<stdio.h>

int A = 10;

void fun()
{
    auto int B = 20;
    register int D = 20;
    static int E = 20;

    B++;
    D++;
    E++;

    printf("VALUE OF int A is : %d\n",A);
    printf("Values of Auto storage variable : %d\n",B);
    printf("Values register storage variable: %d\n",D);
    printf("Values of static storage variable:%d\n",E);

}
int main()
{

    int C = 30;

    printf("first function call \n");
    fun();
    printf("Second function call \n");
    fun();
    printf("Second function call \n");
    fun();


    return 0;
}