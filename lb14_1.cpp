#include <iostream>  

using namespace std;

int main (){
	setlocale(LC_CTYPE, "ukr");
  	char str[100] = "";
  	cout << "Введiть родяк довжиною до 100 символiв" << endl;
	cin.getline(str,100);
	for(int i = 0; i < 100; i++){
		if(isupper(str[i]) == 1){
			cout << " ";
		}
		else{
			cout << str[i];
		}
	}
    return 0;
}
