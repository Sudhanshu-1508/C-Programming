#include<stdio.h>




void division(double dValue1, double dValue2)
{
	double ans = 0;
	ans = dValue1 / dValue2;


	printf("Answer is %lf",ans);
} 



int main()

{
	double iNo1 = 0;
	double iNo2 = 0;
	double div = 0;
	
	printf("enter numbers");
	scanf("%lf", &iNo1);
	printf("enter numbers");
	scanf("%lf", &iNo2);


	division(iNo1,iNo2
	);
	
	
	return 0;
}