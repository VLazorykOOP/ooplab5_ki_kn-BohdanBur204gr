#include <string>
#include <iostream>
#pragma once

using namespace std;

class Engen
{
private:
	float power;

public: 
	Engen();

	Engen(float p);

	~Engen();

	float get_power();
	float set_power(float p);

	friend ostream& operator<< (ostream& os, Engen& eg);
};


class Car : public Engen
{
public:
	string* model_car;
	float price;

	Car();

	Car(string& mc);

	Car(string& mc, float p);

	Car(string& mc, float p, float pow);

	~Car();

	friend ostream& operator<< (ostream& os, Car& egCR);
};


class Truk_Two : public Car {
public: 
	float load_capacity;

	Truk_Two();

	Truk_Two(string* mc);

	Truk_Two(string* mc, float p);

	Truk_Two(string* mc, float p, float pow);

	Truk_Two(string* mc, float p, float pow, float lc);

	~Truk_Two();

	friend ostream& operator<< (ostream& os, Truk_Two& egTR);
};



