#include "Rational.h"
#include<iostream>
#include<cmath>
int Rational::GetNominator() const
{
	return this->nominator;
}

int Rational::GetDenominator() const
{
	return this->denominator;
}

Rational::Rational() //Создаем нулевую дробь
    :nominator(0), denominator(1) {}

Rational::Rational(double digit) //Передаем одну цифру и получаем число в виде дроби
    :nominator(digit), denominator(1) {}

Rational::Rational(double nominator, double denominator)
	:nominator(nominator/evclid(nominator,denominator)), denominator(denominator/evclid(nominator, denominator)) { }

Rational Rational::operator -(const Rational& rhs)
{
	return Rational(this->GetNominator() * rhs.GetDenominator() - rhs.GetNominator() * this->GetDenominator(), this->GetDenominator() * rhs.GetDenominator());
}

Rational Rational::operator +(const Rational& rhs)
{
	return Rational(this->GetNominator()* rhs.GetDenominator() + rhs.GetNominator()* this->GetDenominator(), this->GetDenominator() * rhs.GetDenominator());
}

Rational Rational::operator *(const Rational& rhs)
{
	return Rational(this->GetNominator() *  rhs.GetNominator(), this->GetDenominator() * rhs.GetDenominator());
}

Rational Rational::operator /(const Rational& rhs)
{
	return Rational(this->GetNominator() * rhs.GetDenominator() , this->GetDenominator() * rhs.GetNominator());
}

ostream& operator<<(ostream& stream, const Rational &y)
{
	//if (y.GetDenominator() != 0)
	//{
		stream << y.GetNominator() << "/" << y.GetDenominator() ;
	//}
	//else
	//{
	//	stream << 0;
	//}
	return stream;

}

Rational y1(const Rational& x)
{
	return (Rational(3, 7) + Rational(5, 11) *x - Rational(5, 2) / x);
}

double y2(double x)
{
	return (3.0 / 7.0) + (5.0 / 11.0) * x - (2.5 / x);
}