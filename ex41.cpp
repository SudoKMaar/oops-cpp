#include <iostream>
using namespace std;
class Test
{
public:
    Test() { cout << "Constructor of Test "; }
    ~Test() { cout << "Destructor of Test "; }
};
int main()
{
    try
    {
        Test t1;
        throw 10;
    }
    catch (int i)
    {
        cout << "Caught " << i;
    }
}