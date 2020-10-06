#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	cout << "Pls enter a, b and c for 'ax^2 + bx + c = 0'" << "\n";
	double a, b, c;
	cin >> a >> b >> c;
	if (a != 0 && b != 0)
	{
		long double D = ((b * b) - (4 * a * c));
		if (D > 0)
		{
			double x1 = ((-b - sqrt(D)) / (2 * a));
			double x2 = ((-b + sqrt(D)) / (2 * a));
			cout << "First root: " << x1 << "\n";
			cout << "Second root: " << x2;
		}
		else
			if (D == 0)
			{
				double x3 = ((-b) / (2 * a));
				cout << "Root: " << x3;
			}
			else
				cout << "No roots" << endl;
	}
	else if (a == 0 && b == 0)
	{
		cout << "No roots" << endl;
		return 0;
	}
	else if (a == 0 && b != 0)
	{
		double x4 = (-c / b);
		cout << "Root" << x4;
		return 0;
	}
}
