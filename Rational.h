#pragma once
#include "iostream"
using namespace std;

class Rational
{
private:
	int nominator;//числитель
	int denominator;//знаменатель
	double evclid(int a, int b)
	{
		if (b == 0)
			return a;
		else
			return evclid(b, a % b);
	}

public:
	int GetNominator() const;
	int GetDenominator() const;
	Rational();
	Rational(double digit);
	Rational(double nominator, double denominator);
	Rational operator-(const Rational& rhs);
	Rational operator+(const Rational& rhs);
	Rational operator*(const Rational& rhs);
	Rational operator/(const Rational& rhs);
	friend ostream & operator<<(ostream & stream, const Rational & y);
};

Rational y1(const Rational& x);

double y2(double x);
