#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your number: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "It is even";
    }
    else
    {
        cout << "It is odd";
    }
    return 0;
}