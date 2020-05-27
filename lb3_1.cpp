#include <iostream>
#include <math.h>
using namespace std;
const int k = 5;
int main(){
	setlocale(LC_CTYPE, "ukr");
	float x, a, b;
	cout << "x = ";
	cin >> x;
	a = log(abs(x));
	b = pow(M_E, k) + a;
	cout << "y = " << pow(a, 2)+pow(b, 2) << endl;
	return 0;
}
