#include "CarClass.h"

//CarClass Methots & constructors
CarClass::CarClass() {
	this->model_car = "None";
	this->num_of_cylinders = 0;
	this->power_horse = 0.0;
}

CarClass::CarClass(string mc) : CarClass() {
	this->model_car = mc;
}

CarClass:: CarClass(string mc, int moc) : CarClass(mc) {
	this->num_of_cylinders = moc;
};

CarClass:: CarClass(string mc, int moc, float ph) :CarClass(mc, moc) {
	this->power_horse = ph;
}

CarClass::~CarClass()
{
}



ostream& operator<<(ostream& os, CarClass& cd) {
	return os << "Model cal: " << cd.model_car << endl
		<< "Number of cylinders in engine: " << cd.num_of_cylinders << endl
		<< "Power horse: " << cd.power_horse << endl;
}


//Truk Methots & constructors

Truk::Truk(): CarClass()
{
	this->load_capacity = 0.0;
}

Truk::Truk(string mc) :Truk()
{
	this->model_car = mc;
}

Truk::Truk(string mc, int moc) : Truk(mc)
{
	this->num_of_cylinders = moc;

}

Truk::Truk(string mc, int moc, float ph) : Truk(mc, moc)
{
	this->power_horse = ph;
}

Truk::Truk(string mc, int moc, float ph, float lc) : Truk(mc, moc, ph)
{
	this->load_capacity = lc;
}

Truk::~Truk()
{
}

void Truk::set_model_car(string new_name)
{
	cout << "\nChanged Model name Truk from (" 
		<< this->model_car << ") to (" 
		<< new_name << ") " 
		<< endl << endl;
	this->model_car = new_name;
	cout << *this;
}

void Truk::set_load_capacity(float new_load_capacity)
{
	cout << "\nChanged Load Capacit Truk from ("
		<< this->load_capacity << ") to (" 
		<< new_load_capacity << ") "
		<< endl << endl;
	this->load_capacity = new_load_capacity;
	cout << *this;
}

ostream& operator<<(ostream& os, Truk& td)
{
	return os << "Model cal: " << td.model_car << endl
		<< "Number of cylinders in engine: " << td.num_of_cylinders << endl
		<< "Power horse: " << td.power_horse << endl
		<< "Load capacity: " << td.load_capacity << endl;
}
