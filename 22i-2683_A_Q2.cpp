/*
Muhammad Abdullah Ghani
22i-2683
*/
#include<iostream>
#include"22i-2683_A_Q2.h"
using namespace std;


int main() {
    Fraction a(5, 3);
    Fraction b(2, 1);
    Fraction z;
    /*Fraction f1;
    * 
    f1.setnumerator(2);
    f1.setdenominator(1);*/
    cout << "-b " << endl;
    cout << -b<<endl;
    cout << "--a " << endl;
    cout<< --a << endl;
    cout << "++a " << endl;
    cout<<++a << endl;
    a += b;
    cout << a.numerator << "/" << a.denominator << endl;
    Fraction c(5, 3);
    Fraction d(2, 1);
    c -= d;
    cout << c.numerator << "/" << c.denominator<<endl;
    Fraction e(5, 3);
    Fraction f(2, 1);
    e *= f;
    cout << e.numerator << "/" << e.denominator<<endl;
    Fraction g(5, 3);
    Fraction h(2, 1);
    g /= h;
    z = a + b;
  
    cout << z.numerator << "/" << z.denominator << endl;
    Fraction i(5, 3);
    Fraction j(2, 1);
    z = i - j;
    cout << z.numerator << "/" << z.denominator << endl;
    Fraction k(5, 3);
    Fraction l(2, 1);
    z = k * l;
    cout << z.numerator << "/" << z.denominator << endl;
    Fraction m(5, 3);
    Fraction n(2, 1);
    z = m / n;
    cout << z.numerator << "/" << z.denominator << endl;




	return 0;
}