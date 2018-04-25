#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived : public Base { };
 
int main(void)
{	
    // Base b;  // error
    Base *bp;  // fine
    bp->show(); // segmentation fault
    // Derived q; // error
    return 0;
}
