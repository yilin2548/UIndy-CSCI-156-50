// Name: Yilin Liu-Leitke
// Date: 2/15/18
// Desc: Implementation of the Rational class.

// iostream is not neccassary because cout is not used.
#include <sstream>
// Be sure to include the .h file!
#include "Rational.h"

using namespace std;

// Default constructor
Rational::Rational(){
    numerator = 1;
    denominator = 1;
}
// Overloaded constructor
Rational::Rational(const int &top, const int &bottom){
    numerator = top;
    denominator = bottom;
}
// Setters
void Rational::setNumerator(const int &top){
    numerator = top;
}
void Rational::setDenominator(const int &bottom){
    denominator = bottom;
}
// Getters
int Rational::getNumerator() const{
    return numerator;    
}
int Rational::getDenominator() const{
    return denominator;
}

// Print
string Rational::print() const{
    stringstream s;
    s << numerator << "/" << denominator;
    return s.str();
}

// multBy(int)
void Rational::multBy(const int &n){
    numerator = numerator * n;
}

// addBy(int)
void Rational::addBy(const int &n){
    numerator += denominator * n;
}

// mult(Rational)
Rational Rational::mult(const Rational &other) const{
    // Rational ret;
    // ret.numerator = numerator * other.numerator;
    // ret.denominator = denominator * other.denominator;
    // return ret;
    // Or you can do the following one line:
    return Rational(numerator * other.numerator, denominator * other.denominator);
    
}

// add(Rational)
Rational Rational::add(const Rational &other) const{
    Rational ret;
    ret.numerator = numerator * other.denominator + other.numerator * denominator;
    ret.denominator = denominator * other.denominator;
    return ret;
}

// isEqualTo(Rational)
bool Rational::isEqualTo(const Rational &other) const{
    int ltop = numerator * other.denominator;
    int rtop = other.numerator * denominator;
    return ltop == rtop;
}

// isGreaterThan(Rational)
bool Rational::isGreaterThan(const Rational &other) const{
    int ltop = numerator * other.denominator;
    int rtop = other.numerator * denominator;
    return ltop > rtop;
    return true;
}

// isGreaterOrEqualTo
bool Rational::isGreaterOrEqualTo(const Rational &other) const{
    return isEqualTo(other) || isGreaterThan(other);
}
