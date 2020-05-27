#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "ukr");
	float x;
	float s, c;
	cin >> x;
	s = sin(x); 
	c = cos(x);;
	
	if (s > c) {
		cout >> "Sin > Cos" << endl;
	}
	else {
		cout << "Cos > Sin" << endl;
	}
	return 0;
}

