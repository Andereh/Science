#include<iostream>
#include<math.h>
#include<>

using namespace std;

float result, a, b, c;
float minusB, plusB;
int main()
{
	printf("En habla inglesa por que gusta mas :D\n\n");

	printf("Value of a: "); scanf("%f", &a);
	printf("Value of b: "); scanf("%f", &b);
	printf("Value of c: "); scanf("%f", &c);

	result = sqrt(abs(pow(b, 2) - 4*a*c) / 2*a) ;
	printf("Result (-b): %f\n", (b-result));
	printf("Result (+b): %f\n", (b+result));
	system("pause");
	return 0;
}
