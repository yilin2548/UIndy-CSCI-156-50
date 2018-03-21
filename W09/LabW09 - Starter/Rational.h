#ifndef RATIONAL_H
#define RATIONAL_H
// Remember these two lines above and #endif at the bottom

// Name: Yilin Liu-Letike
// Date: 2/27/18
// Desc: Definition of a class
//       to store and manipulate rational (fractions, int/int)
//       numbers.

using namespace std;  // std is necessary for string type

class Rational{
    private:
        int numerator;
        int denominator;
        static int count;
    public:
        // Constructors
        Rational();
        Rational(const int &top, const int &bottom);
        
        // Setters
        void setNumerator(const int &top);
        void setDenominator(const int &bottom);
        
        // Getters
        int getNumerator() const;
        int getDenominator() const;
        
        // Print
        string print() const;
        
        // multBy(int)
        void multBy(const int &n);
        // addBy(int)
        void addBy(const int &n);
        
        // Since all functions don't need to change values, these can all be
        // const.  Make sure they are const in your cpp!
        
        // mult(Rational)
        Rational mult(const Rational &other) const;
        // add(Rational)
        Rational add(const Rational &other) const;
        
        // isEqualTo(Rational)
        bool isEqualTo(const Rational &other) const;
        // isGreaterThan(Rational)
        bool isGreaterThan(const Rational &other) const;
        // isGreaterOrEqualTo(Rational)
        bool isGreaterOrEqualTo(const Rational &other) const;
        
        // HW 4 functions
        Rational invert() const;
        Rational negate() const;
        Rational subtract(const Rational &) const;
        Rational divide(const Rational &) const;
        bool isNotEqualTo(const Rational &) const;
        bool isLessThan(const Rational &) const;
        bool isLessThanOrEqualTo(const Rational &) const;
        
        operator double();
        
        static unsigned numRationals();
};

#endif
