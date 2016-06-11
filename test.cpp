#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;

main(){
	int a,b,c,D=0,g=0;
	float x=0,x2=0;
	
	for (a=-5; a<=5; a++){
		for (b=-5; b<=5; b++){
	    	for (c=-5; c<=5; c++){
 				zzz(a,b,c,&D,&x,&x2,&g);
 				print(D,x,x2,g);
			}
		}
	}	
}
