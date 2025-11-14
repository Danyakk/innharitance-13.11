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

	string GetName()
	{
		return name;
	}
	void SetName(string n)
	{
		name = n;
	}

	double GetSpeed()
	{
		return speed;
	}
	void SetSpeed(double sp)
	{
		speed = sp;
	}

	string GetColor()
	{
		return color;
	}
	void SetColor(string c)
	{
		color = c;
	}

	int GetPlace()
	{
		return place;
	}
	void SetPlace(int p)
	{
		place = p;
	}

	void Print()
	{
		cout << "Name: " << name << "\tColor: " << color << "\tSpeed: " << speed << "\tCount of places: " << place  << endl;
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

	/*string GetName()
	{
		return name;
	}
	void SetName(string n)
	{
		name = n;
	}

	double GetSpeed()
	{
		return speed;
	}
	void SetSpeed(double sp)
	{
		speed = sp;
	}

	string GetColor()
	{
		return color;
	}
	void SetColor(string c)
	{
		color = c;
	}

	int GetPlace()
	{
		return place;
	}
	void SetPlace(int p)
	{
		place = p;
	}*/

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
		cout << "Lift Capacity: " << liftCapacity << "\tHeight: " << height << "\n  ---------------------------------------------------------------------------" << endl;
	}

};

class plane : public vehicle {
protected:
	double flyHours;
	double wingspan;
	int turbine;
public:
	plane() { flyHours = 0, wingspan = 0; turbine = 0; }
	plane(string n, double sp, string c, int p, double fH, double w, int t)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		flyHours = fH;
		wingspan = w;
		turbine = t;



	}

	/*string GetName()
	{
		return name;
	}
	void SetName(string n)
	{
		name = n;
	}

	double GetSpeed()
	{
		return speed;
	}
	void SetSpeed(double sp)
	{
		speed = sp;
	}

	string GetColor()
	{
		return color;
	}
	void SetColor(string c)
	{
		color = c;
	}

	int GetPlace()
	{
		return place;
	}
	void SetPlace(int p)
	{
		place = p;
	}*/

	double GetFlyHours()
	{
		return flyHours;
	}
	void GetFlyHours(double fH)
	{
		flyHours = fH;
	}

	double GetWingspan()
	{
		return wingspan;
	}
	void SetWingspan(double w)
	{
		wingspan = w;
	}
	int GetTurbine()
	{
		return turbine;
	}
	void SetTurbine(int t)
	{
		turbine = t;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Fly Hours: " << flyHours << "\tWingspan: " << wingspan << "\tCount of turbines: " << turbine << "\n  ---------------------------------------------------------------------------" << endl;
	}

};
class ship : public vehicle {
protected:
	int screws;
	double displacement;
	string fuel;
public:
	ship() { screws = 0, displacement = 0; }
	ship(string n, double sp, string c, int p, int s, double d, string f)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		screws = s;
		displacement = d;
		fuel = f;




	}

	//string GetName()
	//{
	//	return name;
	//}
	//void SetName(string n)
	//{
	//	name = n;
	//}

	//double GetSpeed()
	//{
	//	return speed;
	//}
	//void SetSpeed(double sp)
	//{
	//	speed = sp;
	//}

	//string GetColor()
	//{
	//	return color;
	//}
	//void SetColor(string c)
	//{
	//	color = c;
	//}

	//int GetPlace()
	//{
	//	return place;
	//}
	//void SetPlace(int p)
	//{
	//	place = p;
	//}

	int GetScrews()
	{
		return screws;
	}
	void GetScrews(int s)
	{
		screws = s;
	}

	double GetDisplacement()
	{
		return displacement;
	}
	void SetDisplacement(double d)
	{
		displacement = d;
	}
	string GetFuel()
	{
		return fuel;
	}
	void SetFuel(string f)
	{
		fuel = f;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Count of Screws: " << screws << "\tDisplacement: " << displacement << "\tType of fuel: " << fuel << "\n ----------------------------------------------------------------------------" << endl;
	}

};

class car : public vehicle {
protected:
	string model;
	int horsepower;
	double engineSize;
public:
	car() { horsepower = 0, engineSize = 0; }
	car(string n, double sp, string c, int p, string m, int h, double eS)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		model = m;
		horsepower = h;
		engineSize = eS;




	}

	string GetModel()
	{
		return model;
	}
	void GetModel(int m)
	{
		model = m ;
	}

	int GetHorsePower()
	{
		return horsepower;
	}
	void SetHorsePower(int h)
	{
		horsepower = h;
	}
	double GetEngineSize()
	{
		return engineSize;
	}
	void SetEngineSize(double eS)
	{
		engineSize = eS;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Model: " << model << "\tHorsepowers: " << horsepower << "\tEngine size: " << engineSize << "\n ----------------------------------------------------------------------------" << endl;
	}

};

class bicycle : public vehicle {
protected:
	string model;
	double wheelSize;
	string type;
public:
	bicycle() { wheelSize = 0; }
	bicycle(string n, double sp, string c, int p, string m, double wS, string t)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		model = m;
		wheelSize = wS;
		type = t;




	}

	string GetModel()
	{
		return model;
	}
	void GetModel(int m)
	{
		model = m;
	}

	int GetWheelSize()
	{
		return wheelSize;
	}
	void SetWheelSize(int wS)
	{
		wheelSize = wS;
	}
	string GetType()
	{
		return type;
	}
	void SetType(string t)
	{
		type = t;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Model: " << model << "\tWheel Size: " << wheelSize << "\tType: " << type << "\n ----------------------------------------------------------------------------" << endl;
	}

};

class tank : public vehicle {
protected:
	string model;
	double  calibre;
	double weight ;
public:
	tank() { weight = 0, calibre = 0; }
	tank(string n, double sp, string c, int p, string m, double w, double cal)
	{
		name = n;
		speed = sp;
		color = c;
		place = p;
		model = m;
		weight = w;
		calibre = cal;




	}

	string GetModel()
	{
		return model;
	}
	void GetModel(int m)
	{
		model = m;
	}

	double GetWeight()
	{
		return weight;
	}
	void SetWeight(double w)
	{
		weight = w;
	}
	double GetCalibre()
	{
		return calibre;
	}
	void SetCalibre(double cal)
	{
		calibre = cal;
	}

	void Print()
	{
		vehicle::Print();
		cout << "Model: " << model << "\tWeight in Ton: " << weight << "\tCalibre: " << calibre << "\n ----------------------------------------------------------------------------" << endl;
	}

};

int main()
{
	vehicle obj1("Car", 120, "Red", 5);
	obj1.Print();
	truck obj2("Truck", 80, "Blue", 2, 5000, 4);
	obj2.Print();
	plane obj3("Plane", 600, "White", 150, 2000, 35, 2);
	obj3.Print();
	ship obj4("Ship", 40, "Gray", 300, 4, 20000, "Diesel");
	obj4.Print();
	car obj5("Audi", 350, "Grey", 2, "R8", 525, 5.2);
	obj5.Print();
	bicycle obj6("Santa Cruz", 25, "Green", 1, "Blur M", 29, "MTB");
	obj6.Print();
	tank obj7("Oplot", 70, "Camouflage", 3, "-M", 51, 125);
	obj7.Print();

	cout << "\n ------------------------------------Get/Set---------------------------------\n";
	obj1.SetSpeed(130);
	obj1.GetSpeed();
	obj1.Print();
	obj4.SetFuel("Coal");
	obj4.GetFuel();
	obj4.Print();
}