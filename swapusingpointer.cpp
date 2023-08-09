#include <iostream>
using namespace std;
int main()
{
    int a = 20, b = 10, *p1 = &a, *p2 = &b;
    cout << "Initial Values are : *p1= " << *p1 << "*p2 = " << *p2 << endl;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout << "Final Values are : *p1 = " << *p1 << " *p2 = " << *p2;
    return 0;
}