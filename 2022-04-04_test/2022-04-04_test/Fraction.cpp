#include "Fraction.h"

Fraction::Fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}
Fraction::Fraction(long long numerator, long long denominator) : numerator(numerator), denominator(denominator) {}

Fraction::Fraction(const Fraction& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}
Fraction::~Fraction()
{
	{
		this->numerator = 0;
		this->denominator = 0;
	}
}

double Fraction::getNumerator()
{
	return this->numerator;
}
void Fraction::setNumerator(double x)
{
	this->numerator = x;
}
double Fraction::getDenominator()
{
	return this->denominator;
}
void Fraction::setDenominator(double y)
{
	this->denominator = y;
}

Fraction& Fraction::operator=(const Fraction& fraction)
{
	this->numerator = fraction.numerator;
	this->denominator = fraction.denominator;
}
Fraction Fraction::operator-()
{
	this->numerator = -this->numerator;
	this->denominator = -this->denominator;
}
Fraction& Fraction::operator+=(const Fraction& fraction)
{
	return Fraction(LCM(fraction) / this->denominator * this->numerator + LCM(fraction) / fraction.denominator * fraction.numerator, GCD(fraction));
}

Fraction operator*(const double mult, const Fraction& fraction)
{
	return Fraction(fraction.numerator * mult, fraction.denominator);
}
Fraction operator*(const Fraction& fraction, const double mult)
{
	return Fraction(fraction.numerator * mult, fraction.denominator);
}
Fraction operator*(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator);
}
Fraction operator/(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.numerator * fraction2.denominator, fraction1.denominator * fraction2.numerator;
}
Fraction operator/(const double div, const Fraction& fraction)
{
	return Fraction(fraction.denominator * div, fraction.numerator);
}
Fraction operator/(const Fraction& fraction, const double div)
{
	return Fraction(fraction.numerator, fraction.denominator * div);
}
long long Fraction::GCD(const Fraction& fraction)
{
	long long GCD;
	for (long long i = this->denominator; i > 0; i--) {
		if (this->denominator % i == 0 && fraction.denominator % i == 0) {
			return i;
		}
	}
}
long long Fraction::LCM(const Fraction& fraction)
{
	return this->denominator * fraction.denominator / GCD(fraction);
}
Fraction operator+(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.LCM(fraction2) / fraction1.denominator * fraction1.numerator + fraction2.LCM(fraction2) / fraction2.denominator * fraction2.numerator, fraction1.GCD(fraction2));
}
Fraction operator-(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.LCM(fraction2) / fraction1.denominator * fraction1.numerator - fraction2.LCM(fraction2) / fraction2.denominator * fraction2.numerator, fraction1.GCD(fraction2));
}

bool Fraction::operator==(Fraction& fraction)
{
	return LCM(fraction) / this->denominator * this->numerator == LCM(fraction) / fraction.denominator * fraction.numerator;
}
bool Fraction::operator>=(Fraction& fraction)
{
	return LCM(fraction) / this->denominator * this->numerator >= LCM(fraction) / fraction.denominator * fraction.numerator;
}
bool Fraction::operator<=(Fraction& fraction)
{
	return LCM(fraction) / this->denominator * this->numerator <= LCM(fraction) / fraction.denominator * fraction.numerator;
}
bool Fraction::operator>(Fraction& fraction)
{
	return LCM(fraction) / this->denominator * this->numerator > LCM(fraction) / fraction.denominator * fraction.numerator;
}
bool Fraction::operator<(Fraction& fraction)
{
	return LCM(fraction) / this->denominator * this->numerator < LCM(fraction) / fraction.denominator * fraction.numerator;
}
Fraction Fraction::reverse()
{
	return Fraction(this->denominator, this->numerator);
}
Fraction Fraction::power(int n)
{
	return Fraction(pow(this->numerator, n), pow(this->denominator, n));
}
Fraction Fraction::module()
{
	return Fraction(abs(this->numerator), abs(this->denominator));
}
std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	stream << fraction.numerator << "/" << fraction.denominator;
	return stream;
}
