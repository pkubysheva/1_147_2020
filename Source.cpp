#include <iostream>
#include <cstdio>
#pragma warning(disable : 4996)

int main()
{
	std::puts("Please enter a and b for `ax+b+0`:");
	float a = 0;
	float b = 0;
	std::scanf("%f %f", &a, &b);
	if (a == 0)
		std::cout << "No solution";
	else if (b == 0)
		std::cout << "soluton: 0";
	else
	{
		float x = -b / a;
		std::printf("solution: %f\n", x);
	}
}