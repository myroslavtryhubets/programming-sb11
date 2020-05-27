#include <iostream>
#include <math.h>
using namespace std;

float geom(int x, int y, int z){
    return  pow(x * y * z, 1.0 / 3.0);
}
int main(){
	
	setlocale(LC_CTYPE, "ukr");
	int x, y, z;
  	cout << "x = ";
  	cin >> x;
  	cout << "y = ";
  	cin >> y;
  	cout << "z = ";
  	cin >> z;
  	
	cout << "Середнє геометричне = " << geom(x, y, z) << endl; 	
  	
	return 0;
}




