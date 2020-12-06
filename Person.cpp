#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
    string name;
    int age;
    double S;
    Person(string n, int a, double b)
    {
        name = n;
        age = a;
        S = b;
    }
    Person(string n,int a)
    {
        name = n;
        age = a;
        S = 43.3;
    }
    Person(string n)
    {
        name = n;
        age = 18;
        S = 37.8;
    }
    Person()
    {
        name = "Kate";
        age = 34;
        S = 67.1;
    }
    void move()
    {
        cout << name << "is moving" << endl;
    }

};

int main()
{
    Person Ann("Ann", 25, 56.0);
    cout << "Name: " << Ann.name << "\tAge: " << Ann.age << " \tS " << Ann.S << endl;
    Person Polly("Polly", 17);
    cout << "Name: " << Polly.name << "\tAge: " << Polly.age << " \tS " << Polly.S << endl;
    Person Lena("Lena");
    cout << "Name: " << Lena.name << "\tAge: " << Lena.age << " \tS " << Lena.S << endl;
    Person Kate = Person();
    cout << "Name: " << Kate.name << "\tAge: " << Kate.age << " \tS " << Kate.S << endl;
    return 0;
}

