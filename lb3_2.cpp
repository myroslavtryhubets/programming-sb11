#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "ukr");
	float c, l, t, v;
	cout << "c = ";
	cin >> c;
	cout << "l = ";
	cin >> l;
	t =  2 * M_PI * sqrt(l*c);
	v = 1/t;

	cout << "T = " << t << " v = " << v << endl;
	return 0;
}
