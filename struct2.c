#include <stdio.h>

struct Student
{
   int Marks;
   int Age;
   char Div;
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    Amit.Marks = 90;
    Amit.age = 23;
    Amit.Div = 'A';

    Pooja.Marks = 99;
    Pooja.Age = 21;
    Pooja.Div = 'c';

    return 0;
}