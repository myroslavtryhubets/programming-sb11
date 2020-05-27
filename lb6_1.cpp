#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "ukr");
	float s = 0, n;
	
	cout << "n = ";
	cin >> n;
	for(int i = 1; i < n; i++){
		s += pow(-1, i + 1) / (2 * i - 1);
	}

	cout << "S = " << s << endl;


	return 0;
}

