#include "engen.h"

Engen::Engen()
{
    this->power = 0.0;
}

Engen::Engen(float p)
{
    this->power = p;
}

Engen::~Engen()
{
}

float Engen::get_power()
{
    return this->power;
}

float Engen::set_power(float p)
{
    this->power = p;
    return 1;
}

ostream& operator<<(ostream& os, Engen& eg)
{
    return os << "Power engen = " << eg.get_power() << endl;
}






Car::Car()
{
    this->model_car = NULL;
    this->price = 0.0;
    set_power(0.0);
}

Car::Car(string& mc) : Car()
{
    this->model_car = &mc;
}

Car::Car(string& mc, float p) : Car(mc)
{
    this->price = p;
}

Car::Car(string& mc, float p, float pow) : Car(mc, p)
{
    set_power(pow);
}

Car::~Car()
{
}

ostream& operator<<(ostream& os, Car& egCR)
{
    return os << "Power engen = " << egCR.get_power() << endl
        << "Model car = " << (egCR.model_car == NULL ? "NULL" : *egCR.model_car) << endl
        << "Price car = " << egCR.price << endl;
}







Truk_Two::Truk_Two() : Car()
{
    this->load_capacity = 0.0;
}

Truk_Two::Truk_Two(string* mc) : Car(*mc)
{
    this->load_capacity = 0.0;
}

Truk_Two::Truk_Two(string* mc, float p) : Car(*mc, p)
{
    this->load_capacity = 0.0;
}

Truk_Two::Truk_Two(string* mc, float p, float pow) : Car(*mc, p, pow)
{
    this->load_capacity = 0.0;
}

Truk_Two::Truk_Two(string* mc, float p, float pow, float lc) : Car(*mc, p, pow)
{
    this->load_capacity = lc;
}

Truk_Two::~Truk_Two()
{
}

ostream& operator<<(ostream& os, Truk_Two& egTR)
{
    return os << "Power engen = " << egTR.get_power() << endl
        << "Model car = " << (egTR.model_car == NULL ? "NULL" : *egTR.model_car) << endl
        << "Price car = " << egTR.price << endl
        << "Load capacity = " << egTR.load_capacity << endl;
}
