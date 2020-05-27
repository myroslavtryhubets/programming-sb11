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
	double x, f, u, s = 0, eps = 1.0e-4;
	int i, k = 0;

  	cout << "x = ";
  	cin >> x;
  	cout << "Результати:" << endl;
  	do{
  		k++;
  		
  		u = (pow(-1, k + 1) * pow(x, 2 * k))/(factorial(k)*pow(2, k - 1));
  		cout << "Доданок " << k << " = " << u << endl;
  		
  		s += u;
  		
	} while(fabs(u) >= eps);
	
	cout << "Сума рядкiв з точнiстю " << eps << " = " << s << endl;
	cout << "Кiлькiсть доданкiв = " << k << endl; 	
  	
	return 0;
}




