/*
Muhammad Abdullah Ghani
22i-2683
*/
#pragma
using namespace std;
class Fraction {
public:
	long numerator;
	long denominator;
public:
	Fraction() {
		numerator = 0;
		denominator = 1;

	}
	Fraction(long n1, long d1) {
		if (numerator != 0 && denominator != 0) {
			denominator = d1;
			numerator = n1;
		}
		else {
			cout << "Wrong input" << endl;
			exit(0);
		}
		
	}
	void setnumerator(long n) {
		numerator = n;
	}
	 void setdenominator(long d) {
		 denominator = d;
	}
	long int getnumerator() {
		return numerator;
	}
	long int getdenominator() {
		return denominator;
	}
	long operator-() {
		numerator = -numerator;
		return numerator;
	}
	long operator++() {
		Fraction f;
		numerator = numerator + denominator * 1;
		denominator = denominator;
		cout << numerator << "/" << denominator << endl;
		return numerator, denominator;
	}
	long operator--() {
		Fraction f;
		numerator = numerator - denominator * 1;
		denominator = denominator;
		cout << numerator << "/" << denominator << endl;
		return numerator,denominator ;
	}
	Fraction operator+=(Fraction F) {
		
		numerator = (numerator * F.denominator) + (denominator*F.numerator );
		denominator = denominator * F.denominator;
		return *this;
	}
	Fraction operator-=(Fraction& F) {
		numerator = numerator * F.denominator - F.numerator * denominator;
		denominator = denominator * F.denominator;
		return *this;
	}
	Fraction operator*=(Fraction& F) {
		numerator = numerator * F.numerator;
		denominator =  (F.denominator*denominator);
		return *this;
	}
	long operator/=(Fraction& F) {
		numerator = numerator * F.denominator;
		denominator = denominator * F.numerator;
		cout << numerator << "/" << denominator << endl;
		return numerator,denominator;
	}
	friend Fraction operator+(Fraction& F, Fraction& F1);
	friend Fraction operator-(Fraction& F, Fraction& F1);
	friend Fraction operator*(Fraction& F, Fraction& F1);
	friend Fraction operator/(Fraction& F1, Fraction& F2);
	friend ostream& operator<<(ostream& out, const Fraction& F);
	friend istream& operator>>(istream& in, Fraction& F);

};
Fraction operator+(Fraction& F, Fraction& F1) {
	Fraction fr;
	fr.numerator= F.numerator*F1.denominator + F1.numerator*F.denominator;
	fr.denominator = F.numerator * F1.denominator;
	return fr;
}
Fraction operator-(Fraction& F, Fraction& F1) {
	Fraction fr;
	fr.numerator = F.numerator * F1.denominator - F1.numerator * F.denominator;
	fr.denominator = F.numerator * F1.denominator;
	return fr;
}
Fraction operator*(Fraction& F, Fraction& F1) {
	Fraction fr;
	fr.numerator = F.numerator *  F1.numerator ;
	fr.denominator = F.denominator * F1.denominator;
	return fr;
}
Fraction operator/(Fraction& F, Fraction& F1) {
	
	Fraction fr;
	fr.numerator = F.numerator * F1.denominator ;
	fr.denominator = F1.numerator * F.denominator;
	return fr;
}
ostream& operator<<(ostream& out,const Fraction f) {
	out << f.numerator<<"/" << f.denominator;
	return out;
}
istream& operator>>(istream& in, Fraction F) {
	in >> F.numerator;
	in >> F.denominator;
	return in;
}

