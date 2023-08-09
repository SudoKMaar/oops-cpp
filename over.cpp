#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout << "BASE FUNCTION";
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "DERIVED FUNCTION";
    }
};
int main()
{
    Derived derived1;
    Base *ptr = &derived1;
    ptr->print();
    return 0;
}
