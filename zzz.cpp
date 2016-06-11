#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;


int zzz(int a, int b, int c, int *D, float *x, float *x2, int *g){
	*D=(b*b)-(4*a*c);
   	if (*D>0){
    	*x=((-b)+sqrt(*D))/(2*a);
    	*x2=((-b)-sqrt(*D))/(2*a);
    	*g=2;
	}
	else
    if (*D==0){
    	*x=b/2*a;
    	*g=1;
		}
    	else
    	*g=0;
}



int print(int D, float x, float x2, int g){
	cout << "D = " << D << "\n \r";
	if (g==0){
		cout << "No!\n \r";		
	}
	else{
		if (g==2){
			cout << "x1=" << x << " x2=" << x2<< "\n \r";
		}
		else
		cout << "x=" << x<< "\n \r";
	}
}
