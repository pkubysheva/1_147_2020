#include<iostream>
#include <math.h>

int main()
{
	std::cout << "Please enter a,b and c for a*a*x+b*x+c=0:\n";
	float a = 0;
	float b = 0;
	float c = 0;
	std::cin >> a>> b>> c;
	float D =(b * b) + (4 * a * c);
	
	if (D < 0)
		std::cout << "Error";
	else if (D == 0)
		std::cout << "X= "<<-b / (2 * a);
	else
	{
		float x = (-b + sqrt(D)) / (2 * a);
		float y = (-b - sqrt(D)) / (2 * a);
		std::cout << "X1= " << x << "\nX2= " << y;
	}
	return 0;
}