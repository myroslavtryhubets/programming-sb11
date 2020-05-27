#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "ukr");
	
	const int n = 3;
	struct products{
		char name[12], 
		company[10];
		int amount;
		float price;
	} nom[n], *nt = &nom[0];
	
	int numbers = 0, average_price = 0; 

	cout << "Введiть iнформацiю про " << n <<  " видiв товару" << endl;
  	for(int i = 0; i < n; ++i) {
  		cout << "Назва товару - " << i + 1 <<  " > ";
  		cin.getline(nom[i].name, 12);
  		cout << "Виробник - " << i + 1 <<  " > ";
  		cin.getline(nom[i].company, 10);
  		cout << "Цiна - " << i + 1 <<  " > ";
  		cin >> nom[i].price;
  		cout << "Кiлькiсть - " << i + 1 <<  " > ";
  		cin >> nom[i].amount;
  		cin.ignore();
  		numbers += nom[i].amount;
  		average_price += nom[i].price;
	}
	
	cout << "Загальна кiлькiсть = " << numbers << endl;
	cout << "Середня цiна товарiв = " << average_price/n << endl;
	  	
	return 0;
}




