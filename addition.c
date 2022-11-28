#include<stdio.h>
void demo()
{
	auto int A = 10;
	A++;
	printf("Value from Demo is : %d\n",A);

}
void hello()
{
	static int B = 10;
	B++;
	printf("Value from hello is: %d\n",B);
}
int main()

{
	demo();
	demo();
	demo();
	hello();
	hello();
	hello();
	return 0;
}

// ssjfh