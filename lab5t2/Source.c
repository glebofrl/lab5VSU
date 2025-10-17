#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#define k 1.2

void main()
{
	setlocale(LC_CTYPE, "RUS");
	double x, y, a, b;
	printf("¬ведите число: ");
	scanf("%lf", &x);
	a = exp(k * x);
	double lx = pow(log(x), 2);
	b = lx + pow(k, 5);
	y = pow(pow(a, 2) + pow(b, 2), 1. / 3);
	printf("x=%.1lf\ny=%.2lf", x, y);
}