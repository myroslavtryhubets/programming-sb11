#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
	
	setlocale(LC_CTYPE, "ukr");
  	int x, y = 0;
  	cout << "x = ";
  	cin >> x;
	for(int i = 1; i <= 6; ++i) {
		y += (pow(-1, i)*pow(x,2 * i))/factorial(3*i - 1);
	}
	
	cout << "Y = " << y << endl;
	return 0;
}
