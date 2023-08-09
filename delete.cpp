#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int[2];
    ptr[0] = 20;
    ptr[1] = 40;
    delete[] ptr;
    return 0;
}