#include <iostream>
#include <math.h>
using namespace std;

int count(int n, int A[]){
    for (int i = 0; i <= n; i++){
    	if(A[i] == 0){
    		return n - i;
		}
    }
    return 0;
}
int main(){
	int A[8];
	setlocale(LC_CTYPE, "ukr");

  	for(int i = 0; i <= 8; ++i) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	
	cout << "Розмiщений на " << count(8, A) <<  " пiсля першого нуля" << endl;
	  	
	return 0;
}




