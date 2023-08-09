#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
};
class B
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
};
class C : public A, public B
{
public:
    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl
             << endl;
        cout << "Addition of a and b is : " << a + b;
    }
};
int main()
{
    C obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.display();
    return 0;
}