#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	scanf_s("%f %f", &a, &b);
	printf("%.2f ^ %.2f = %.2f\n", a,b,pow(a, b));
	return 0;
}