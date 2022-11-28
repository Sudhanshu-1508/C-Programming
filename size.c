#include<stdio.h>

int main()

{
    char ch = 'A';
    int i = 11;
    float f =  3.14;
    double d = 9.567;

    printf("Values from the program are:\n");
    printf("%c\n",ch);
    printf("%f\n",f);
    printf("%d\n",i);
    printf("%lf\n",d);


    printf("Size of each variable");
    printf("Size of character : %d\n",sizeof(ch));  //sizeof() used to display size 
    printf("size of integer : %d\n",sizeof(i));    //in brackets use the name of the variable
    printf("size of float : %d\n",sizeof(f));      //size of is an operator 
    printf("size of double : %d\n",sizeof(d));


    printf("Address of each variable\n");
    printf("Address of ch : %p\n",&ch);
    printf("Address of i : %p\n",&i);
    printf("Address of f : %p\n",&f);
    printf("Address of d : %p\n",&d);
    
    return 0;
}