#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double D;
	

	cout << "= a:";
	cin >> a;
	cout << "= b:";
	cin >> b;
	cout << "= c:";
	cin >> c;

	D = b * b - 4 * a * c;
	if (D > 0)
	{ 
		double x1;
		double x2;
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1= " << x1;
		cout << "\nx2= " << x2;
	}

	if (D == 0)
	{
		double x;
		x = (-b) / (2 * a);
		cout << "x=" << x;
	}

	if (D < 0)
	{
		cout << "solution: ";
	}

}