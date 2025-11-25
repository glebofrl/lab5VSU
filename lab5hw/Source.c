#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

void main()
{
	setlocale(LC_CTYPE, "RUS");
	float a, b;
	int step;
	printf("¬ведите число в формате \"x*b^n \"   ");
	scanf("%f*%f^%d", &a, &b, &step);
	float x, y, z;
	long double firstCalc, secondCalc, fi;
	x = a * pow(b, step);
	printf("¬ведите y: ");
	scanf("%f", &y);
	printf("¬ведите z: ");
	scanf("%f", &z);

	firstCalc = (exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z));
	secondCalc = pow(pow(x, 2) + pow(log(y), 2), 1. / 3);
	fi = firstCalc + secondCalc;
	printf("–езультат вычислений: %.3lf\n", fi);

	system("pause");

}

