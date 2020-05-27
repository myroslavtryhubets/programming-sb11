#include <iostream>
#include <math.h>
using namespace std;
int main(){
	
	setlocale(LC_CTYPE, "ukr");
	float A[10];
  	int sum = 0;
	for(int i = 0; i <= 9; ++i) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	for(int i = 0; i <= 9; ++i) {
		if (A[i] > 0) {
			sum++;
		}
	}
	
	cout << "У масивi " << sum << " додатнiх чисел" << endl;
	return 0;
}
