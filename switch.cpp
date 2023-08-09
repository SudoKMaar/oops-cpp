#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number ";
    cin >> num;
    switch (num)
    {
    case 10:
        cout << "It is 10";
        break;
    case 20:
        cout << "It is 20";
        break;
    case 30:
        cout << "It is 30";
        break;
    default:
        cout << "It is neither 10 nor 20 or 30";
        break;
    }
    return 0;
}