#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age < 18)
        goto ineligible;
    else
        cout << "You can vote";
ineligible:
    cout << "You can't vote";
    return 0;
}