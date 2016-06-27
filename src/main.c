#include <math.h>
#include <stdio.h>
#include <root.h>

int main () {
	double a, b, c, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	korni(a, b, c, &x1, &x2);
	printf("%lf\n%lf", x1, x2);
	return 0;
}
	
	
