#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846

void main()
{
	setlocale(LC_CTYPE, "RUS");
	double gr;
	printf("¬ведите градусы: ");
	scanf("%lf", &gr);
	printf("—инус угла в %.1lf град = %lf", gr, sin(gr * M_PI / 180));

}