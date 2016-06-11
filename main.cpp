#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;

main(){
	int a,b,c,D=0,g=0;
	float x=0,x2=0;
	//cin >> a >> b >> c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	
	zzz(a,b,c,&D,&x,&x2,&g);
	print(D,x,x2,g);
}
