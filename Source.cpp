#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#include "Rational.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	Rational Name(5,2);
	y1(Name);
	cout << "������� y1 � ������������� �����:\n����� � ���� ������� ����� y1 = " <<y1(Name)<< endl;
	cout << "������� y2 ����� �������: \n����� � ���� ���������� ����� y2 = " << y2(2.5) << endl;
}
