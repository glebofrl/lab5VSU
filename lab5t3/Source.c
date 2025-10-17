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
	printf("Введите число: ");
	scanf("%lf", &x);
	a = exp(k * x);
	double lx = pow(log(x), 2);
	b = lx + pow(k, 5);
	y = pow(pow(a, 2) + pow(b, 2), 1. / 3);
	printf("x=%.1lf\ny=%.2lf\n\n", x, y);

	int A = a;
	int B = b;
	int C = y;
	printf("a=%.2lf b=%.2lf c(y)=%.2lf\n", a, b, y);
	printf("условие выполнено (1 - да, 0 - нет)\n");

	printf("Только одно из чисел A и B четное: %d\n", (A % 2 == 0 & B % 2 != 0) | (A % 2 != 0 & B % 2 == 0));
	printf("Каждое из чисел А,В,С кратно трем: %d\n", A % 3 == 0 & B % 3 == 0 & C % 3 == 0);
	printf("A=%d\nB=%d\nC=%d", A, B, C);

}