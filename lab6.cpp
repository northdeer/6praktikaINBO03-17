
#include <iostream>
using namespace std;

struct Property
{
	virtual ~Property() {}
	virtual float worth() = 0;
};

struct Appartment : Property
{
	int duty1;
	Appartment(int a) : duty1(a){}
float worth()
{
	return duty1*0.001;
}
};

struct Car : Property
{
	int duty2;
	Car(int a) : duty2(a){}
float worth()
{
	return duty2*0.02;
}
};

struct CountryHouse : Property
{
	int duty3;
	CountryHouse(int a) : duty3(a){}
float worth()
{
	return duty3*0.05;
}
};

int main()
{
	setlocale(0, "");
	Property *property[7];
	property[0] = new Appartment(3000000);
	property[1] = new Appartment(7000000);
	property[2] = new Appartment(13000000);
	property[3] = new Car(70000);
	property[4] = new Car(6000000);
	property[5] = new CountryHouse(253000000);
	property[6] = new CountryHouse(57800000);
	for (int i = 0; i < 7; i++)
	{
		cout << "Налог на объкт собственности номер " << i+1 << " равен " << fixed << property[i]->worth() << endl;
		delete property[i];
	}
	system("pause");
	return 0;
}
