#include <stdio.h>
#include <math.h>
void korni (double a, double b, double c, double *x1, double *x2) {
	double D;
	D = b*b -4*a*c;
		
	if (D >= 0) {
		*x1 = (-b - sqrt(D)) / (2*a);
		*x2 = (-b + sqrt(D)) / (2*a);
	}
}
