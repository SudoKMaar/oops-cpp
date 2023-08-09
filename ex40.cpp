#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Caught ";
            throw;
        }
    }
    catch (int n)
    {
        cout << "Default Exception\n";
    }
    return 0;
}