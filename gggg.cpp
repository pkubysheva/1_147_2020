#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "vvedite a: ";
    cin >> a;
    cout << "vvedite b: ";
    cin >> b;
    cout << "vvedite c: ";
    cin >> c;
    if ((b * b - 4 * a * c) > 0) //Если дискриминант больше нуля
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "pervyi koren = " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "vtoroi koren = " << x << endl;
    }
    if ((b * b - 4 * a * c) == 0) //Если дискриминант равен нулю
    {
        x = ((-1 * b) / (2 * a));
        cout << "koren raven" << x << endl;
    }
    if ((b * b - 4 * a * c) < 0) //Елси дискриминант меньше нуля
    {
        cout << "diskriminant menshe 0, korney net" << endl;
    }

    return 0;
}