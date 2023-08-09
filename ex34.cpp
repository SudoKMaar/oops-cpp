#include <iostream>
using namespace std;
void square(int a)
{
    cout << "Square of " << a << " is " << a * a << endl;
}
void square(double a)
{
    cout << "Square of " << a << "is " << a * a << endl;
}
int main()
{
    square(9);
    square(2.25);
    return 0;
}