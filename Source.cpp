// Lab_02.cpp
// <����� �����>
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // ����� ϳ
	double x; // ������� �������� �����
	// double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "x = "; cin >> x;
	// z1 = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
	z2 = cos(1.5 * (Pi) - x) / sin(1.5 * (Pi) - x);
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}