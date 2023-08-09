#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("test.txt");
    string s;
    while (!file.eof())
    {
        file >> s;
        cout << s << endl;
    }
    file.close();
}