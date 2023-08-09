#include <iostream>
using namespace std;
int main()
{
    int num = 30;
    int *p;
    p = &num;
    cout << "Address of num variable is : " << &num << endl;
    cout << "Address of p variable is : " << p << endl;
    cout << "Value od p variable is : " << *p << endl;
    return 0;
}