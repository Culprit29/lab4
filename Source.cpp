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
	cout << "Решение y1 с использование класс:\nОтвет в виде простой дроби y1 = " <<y1(Name)<< endl;
	cout << "Решение y2 через функцию: \nОтвет в виде десятичной дроби y2 = " << y2(2.5) << endl;
}
