// Самолёт (получить и установить скорость полёта)
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
class Airplane
{
public:
	string model;
	double time;
	double distance;
	double speed;

	Airplane(string model, double time, double distance, double speed)
	{
		this->model = model;
		this->time = time;
		this->distance = distance;
		this->speed = speed;
	}
	Airplane(double time)
	{
		this->model = model;
		this->time = time;
		this->distance = 2500;
		this->speed = 350;
	}
	void move()
	{
		cout << model << "" << endl;
	}



};


int main()
{
	Airplane plane1("A", 2536, 3800, 350);
	cout << "Model: " << plane1.model << endl;
	cout << "Time: " << plane1.time << endl;
	cout << "Distance: " << plane1.distance << endl;
	cout << "Speed: " << plane1.speed << endl;

	Airplane plane2("B", 25, 4000, 250);
	cout << "Model: " << plane2.model << endl;
	cout << "Time: " << plane2.time << endl;
	cout << "Distance: " << plane2.distance << endl;
	cout << "Speed: " << plane2.speed << endl;
	return 0;
}
