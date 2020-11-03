#include <iostream>
#include <cmath>
#include <string>

double calc(double a, double b, double x);
double calc(double x);
void taskA(double a, double b, double xn, double xk, double dx);
void taskB(double a, double b, double* x, int size);

using namespace std;

double calc(double a, double b, double x)
{
	double numenator = log10(pow(x, 2) - 1);
	double denominator = log(a * pow(x, 2) - b) / log(5.0);
	double y = numenator / denominator;
	return y;
}

double calc(double x)
{
	const double a = 1.1;
	const double b = 0.09;
	return calc(a, b, x);
}

void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, b, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void taskB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);

		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}
int main(int argc, char* argv[])
{
	double a = 1.1;
	double b = 0.09;
	double xn = 1.2;
	double xk = 2.2;
	double dx = 0.2;

	cout << "taskA:" << endl;
	taskA(a, b, xn, xk, dx);

	double x[] = { 1.21,1.76,2.53,3.48,4,52 };

	cout << "taskB:" << endl;

	taskB(1.1, 0.09, x, sizeof(x) / sizeof(x[0]));

	return 0;
}
