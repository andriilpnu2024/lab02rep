// Lab_02.cpp
// <Кащук Андрій>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число Пі
	double x; // вхідний параметр альфа
	// double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	// z1 = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
	z2 = cos(1.5 * (Pi) - x) / sin(1.5 * (Pi) - x);
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}