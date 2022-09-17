#include <iostream>
#include <string>

using namespace std;

#pragma once
class complex
{
	private:
		double realN;
		double imaginaryN;
	public:

		complex();
		complex(double, double);

		friend ostream& operator<<(ostream &output, const complex& object);
		friend istream& operator>>(istream& input, complex& object);
		friend complex operator*(double n, const complex& object);

		complex operator~() const;
		complex operator+(const complex& b) const;
		complex operator-(const complex& b) const;
		complex operator*(const complex& b) const;

};

