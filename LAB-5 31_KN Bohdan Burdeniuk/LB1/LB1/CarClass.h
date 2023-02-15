#include <string>
#include <iostream>
#pragma once

using namespace std;

class CarClass
{
public:
	string model_car;
	int num_of_cylinders;
	float power_horse;

	CarClass();

	CarClass(string mc);

	CarClass(string mc, int moc) ;

	CarClass(string mc, int moc, float ph);

	virtual ~CarClass();

	friend ostream& operator<< (ostream& os, CarClass& cd); 
};

class Truk : public CarClass {
public:
	float load_capacity;

	Truk();

	Truk(string mc);

	Truk(string mc, int moc);

	Truk(string mc, int moc, float ph);

	Truk(string mc, int moc, float ph, float lc);

	virtual ~Truk();

	friend ostream& operator<< (ostream& os, Truk& td);

	void set_model_car(string new_name);

	void set_load_capacity(float new_load_capacity);
};
