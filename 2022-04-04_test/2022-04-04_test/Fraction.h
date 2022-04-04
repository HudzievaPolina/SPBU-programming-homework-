#pragma once
#include<cmath>
#include<ostream>

class Fraction
{
	private:
		long long numerator;
		long long denominator;
		
	public:
		Fraction();
		Fraction(long long numerator, long long denominator);
		Fraction(const Fraction& fraction);
		~Fraction();

		double getNumerator();
		void setNumerator(double x);
		double getDenominator();
		void setDenominator(double y);

		Fraction& operator=(const Fraction& fraction);
		Fraction operator-();
		Fraction& operator+=(const Fraction& fraction);

		friend Fraction operator*(const double mult, const Fraction& fraction);
		friend Fraction operator*(const Fraction& fraction, const double mult);
		friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2);
		friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2);
		friend Fraction operator/(const double div, const Fraction& fraction);
		friend Fraction operator/(const Fraction& fraction, const double div);
		friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2);
		friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2);

		bool operator==(Fraction& fraction);
		bool operator>=(Fraction& fraction);
		bool operator<=(Fraction& fraction);
		bool operator>(Fraction& fraction);
		bool operator<(Fraction& fraction);

		long long GCD(const Fraction& fraction);
		long long LCM(const Fraction& fraction);
		
		Fraction reverse();
		Fraction power(int n);
		Fraction module();
		
		friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);

};//Операторы ==, >=, <=, <, >, +, -, *, <<

