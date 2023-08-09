#include <iostream>
using namespace std;
class Student
{
public:
    Student()
    {
        cout << "I am a Student";
    }
};
int main()
{
    Student *ptr;
    ptr = new Student;
    return 0;
}
