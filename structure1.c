#include<stdio.h>

// strucutre declaration
// no memory allocation at this point

struct demo
{
    int i;  //4
    float f;   //4
    int j;    //4
    double d;   //8
};

int main()
{
// strucutre object / variable creation
// memory get allocated at this point  

    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

// member initialization

    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("size of obj1 is %d\n", sizeof(obj1));
    printf("size of obj2 is %d\n", sizeof(obj2));
    printf("i of obj2 is : %d\n,obj2.i");
    return 0;

}