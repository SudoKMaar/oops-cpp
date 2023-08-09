#include <iostream>
using namespace std;
int main()
{
    int num;
    int *arr = new int[num];
    cout << "Enter the size of array: ";
    cin >> num;
    cout << "Enter the element : ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements you have entered are : ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i];
    }
    delete arr;
    return 0;
}