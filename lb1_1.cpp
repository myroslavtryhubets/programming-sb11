// Лабораторна робота №1  Варіант 2
// Студент групи СБ-11 Тригубець М.І.


#include <iostream>
#include <Windows.h>

using namespace std;

int main(){
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    int max = 0; int zero = 0; int b; int a[20];
    cout << "b = ";
    cin >> b;
    for (int i = 0; i < 20; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    if (a[3] > b) {
        for (int i = 0; i < 20; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        cout << "Максимальне значення = " << max;
    }
    else {
        for (int i = 0; i < 20; i++) {
            if (a[i] == 0) {
                zero++;
            }
        }
        cout << "Нульових елементів масиву = " << zero;
    }
}
