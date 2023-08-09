#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    file << "This is line 1 \n This is another line ";
    cout << "successful :) ";
    file.close();
}