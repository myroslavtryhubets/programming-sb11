// Лабораторна робота №1  Варіант 2
// Студент групи СБ-11 Тригубець М.І.

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int C[10][30]; int X[10];

    for (int i = 0; i < 10; i++) {
        X[i] = 0;
        for (int j = 0; j < 30; j++) {
            cout << "C[" << i << "][" << j << "] = ";
            cin >> C[i][j];
            X[i] += C[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << X[i] << endl;
    }
}
