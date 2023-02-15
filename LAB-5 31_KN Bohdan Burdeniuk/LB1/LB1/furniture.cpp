#include "furniture.h"

Furniture::Furniture()
{
	this->width = 0.0;
	this->height = 0.0;
	this->color = "None";
	this->type = "None";
}

Furniture::Furniture(float w, float h, string c, string type)
{
	this->width = w;
	this->height = h;
	this->color = c;
	this->type = type;
}

Furniture::Furniture(const Furniture& f)
{
	width = f.width;
	height = f.height;
	color = f.color;
	type = f.type;
}

Furniture Furniture::operator=(const Furniture f)
{
	width = f.width;
	height = f.height;
	color = f.color;
	type = f.type;
	return *this;
}


Furniture::~Furniture()
{
}

ostream& operator<<(ostream& os, Furniture& f)
{
	return os 
		<< endl << "Width: " << f.width << endl
		<< "Height: " << f.height << endl
		<< "Color: " << f.color << endl
		<< "Type furniture: " << f.type << endl;
}

istream& operator>>(istream& is, Furniture& f)
{
	cout << "Input width: ";
	is >> f.width;
	cout << "Input height: ";
	is >> f.height;
	cout << "Input color: ";
	is >> f.color;
	cout << "Input type: ";
	is >> f.type;

	return is;
}





Table::Table() : Furniture()
{
	this->type_table = "NULL";
}

Table::Table(float w, float h, string c, string type, string type_T) : Furniture(w, h, c, type)
{
	this->type_table = type_T;
}

Table::Table(const Table& t)
{
	width = t.width;
	height = t.height;
	color = t.color;
	type = t.type;
	type_table = t.type_table;
}

Table::~Table()
{
}

ostream& operator<<(ostream& os, Table& f)
{
	return os
		<< endl << "Width: " << f.width << endl
		<< "Height: " << f.height << endl
		<< "Color: " << f.color << endl
		<< "Type furniture: " << f.type << endl
		<< "Type Table: " << f.type_table << endl;
}

istream& operator>>(istream& is, Table& f)
{
	cout << "Input width: ";
	is >> f.width;
	cout << "Input height: ";
	is >> f.height;
	cout << "Input color: ";
	is >> f.color;
	cout << "Input type: ";
	is >> f.type;
	cout << "Input type table: ";
	is >> f.type_table;

	return is;
}