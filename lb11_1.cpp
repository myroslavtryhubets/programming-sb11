#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "ukr");
	int k = 0, sum = 0;
	int A[12];
	for(int i = 0; i < 12; ++i) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
		if (A[i] > 0) {
			k++; sum += A[i];
		}
	
	}
 	cout << "Середнє арефметичне додатних елементiв = " << sum / k << endl;

	return 0;
}

