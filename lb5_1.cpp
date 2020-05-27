#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main(){
	
  	setlocale(0,"ukr");
	int n=1;
	double x;
	float y;
	cout << "õ = ";
	cin >> x;
	M1:
	switch (n){
	  
		case 1: { 
	  		y = tan(abs(1 + pow(M_E, x + 1.2)))/x + sin(x);
	   		break;
		}
	  	case 2: {
			y = pow(sqrt(cos(abs(M_PI + x))),1/4);
	   		break;
		}
		case 3: { 
			y= (1 + pow(x, x + 1) - log10(x))/(pow(x, 3) + log10(abs(x)));
	   		break;
		}
	}
	cout << "y" << n << "=" << y << endl;n++;
	
	if(n<=3){
	goto M1;
	}
  
  return 0;
}
