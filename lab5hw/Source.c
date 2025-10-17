#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

void main()
{
	setlocale(LC_CTYPE, "RUS");
	float x, y, z, fi;
	float firstCalc, secondCalc;
	x = -2.235 * pow(10, -2);
	y = 2.23;
	z = 15.221;
	firstCalc = (exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z));
	secondCalc = pow(pow(x, 2) + pow(log(y), 2), 1. / 3);
	fi = firstCalc + secondCalc;
	printf("Результат вычислений: %.3f\n", fi);

	system("pause");

}

