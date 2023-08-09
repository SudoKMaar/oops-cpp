#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your marks: ";
    cin >> num;
    if (num < 0 || num > 100)
        cout << "Enter Valid Marks";
    else if (num >= 0 && num < 50)
        cout
            << "fail";
    else if (num >= 50 && num < 60)
        cout
            << "Second Distinction";
    else if (num >= 60 && num < 80)
        cout
            << "First Distinction";
    else if (num >= 80 && num < 100)
        cout
            << "A Grade";
    return 0;
}