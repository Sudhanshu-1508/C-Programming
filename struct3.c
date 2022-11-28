#include <stdio.h>

struct Student
{
   int Marks;
   int Age;
   char Div;
};

int main()
{
    struct Student obj;
    struct Student *ptr = NULL;

    ptr = &obj;
// indirect accessing operator ->
    ptr->Marks = 90;
    ptr->Age = 21;
    ptr->Div = 'A';

    return 0;
}