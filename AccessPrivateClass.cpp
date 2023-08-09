#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;

public:
    void compute_area(double r)
    {
        radius = r;
        double area = 3.14 * r * r;
        cout << "Area of Circle is: " << area << endl;
    }
};
int main()
{
    Circle obj;
    obj.compute_area(1.5);
    return 0;
}