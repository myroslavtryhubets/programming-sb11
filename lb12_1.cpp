#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "ukr");
	int A[4][5]; 
	int max, x, y;;
	for(int i = 0; i <= 4; ++i) {
		for(int j = 0; j <= 5; ++j) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
			if (i == 0 and  j == 0) {
				max = A[0][0]; 
				x = 0; 
				y = 0;
			}
			else {
				if (max < A[i][j]) {
					max = A[i][j]; 
					x = i; 
					y = j;
				}
			}
		}
	}
	cout << "Максимальне значення  = " << max << endl;
	cout << "За iндексами [" << x << "][" << y << "]" << endl;
	return 0;
}

