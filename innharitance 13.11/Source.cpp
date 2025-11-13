#include <iostream>
#include <string>
using namespace std;

class vehicle {
protected:
	string name;
	double speed;
	string color;
	int place;
public:
	vehicle() { speed = 0, place = 0; }
	vehicle(string n, double sp, string c, int p )
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
	}

	string Getname()
	{
		return name;
	}
	void Setname(string n)
	{
		name = n;
	}

	double Getspeed()
	{
		return speed;
	}
	void Setspeed(double sp)
	{
		speed = sp;
	}

	string Getcolor()
	{
		return color;
	}
	void Setcolr(string c)
	{
		color = c;
	}

	int Getplace()
	{
		return place;
	}
	void Setplace(int p)
	{
		place = p;
	}

	void Print()
	{
		cout << "Name: " << name << "Color: " << color << "Speed: " << speed << "Number of places: " << endl;
	}

};

class truck : public vehicle {
protected:
	double liftCapacity;
	double height;
public:
	truck() { liftCapacity = 0, height = 0; }
	truck(string n, double sp, string c, int p, double lC, double h)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		liftCapacity = lC;
		height = h;


	}

	string Getname()
	{
		return name;
	}
	void Setname(string n)
	{
		name = n;
	}

	double Getspeed()
	{
		return speed;
	}
	void Setspeed(double sp)
	{
		speed = sp;
	}

	string Getcolor()
	{
		return color;
	}
	void Setcolr(string c)
	{
		color = c;
	}

	int Getplace()
	{
		return place;
	}
	void Setplace(int p)
	{
		place = p;
	}

	double GetLiftCapacity()
	{
		return liftCapacity;
	}
	void SetLiftCapacity(double lC)
	{
		liftCapacity = lC;
	}

	double GetHeight()
	{
		return height;
	}
	void SetHeight(double h)
	{
		height = h;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Lift Capacity: " << liftCapacity << "Height: " << height << endl;
	}

};