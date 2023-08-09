#include <iostream>
using namespace std;
class Animal
{
public:
    void drink()
    {
        cout << "Dogs Drink Milk!" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog Barks!" << endl;
    }
};
class Puppy : public Dog
{
public:
    void weaps()
    {
        cout << "Puppy Weaps!";
    }
};
int main()
{
    Puppy P1;
    P1.drink();
    P1.bark();
    P1.weaps();
    return 0;
}
