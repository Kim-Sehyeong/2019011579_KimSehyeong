#include <stdio.h>

int main(void)
{
	double tribase, triheight, recbase, recheight, cirrad, sphrad = 0.0;
	const int pi = 3.14159265359;

	printf("input values : (tribase, triheight, recbase, recheight, cirrad, sphrad)\n");
	scanf_s("%lf %lf %lf %lf %lf %lf", &tribase, &triheight, &recbase, &recheight, &cirrad, &sphrad);
	printf("area of diagram : (%.2lfcm^2, %.2lfcm^2, %.2lfcm^2, %.2lfcm^2, %.2lfcm^3)\n", tribase * triheight / 2, recbase * recheight, cirrad * cirrad * pi, 4 * pi * sphrad * sphrad, 1.33 * pi * sphrad * sphrad * sphrad);


	return 0;
}



