#include <string>
#include <iostream>
#pragma once

using namespace std;

class Furniture
{
public:	
	float width;
	float height;
	string color;
	string type;

	Furniture();

	Furniture(float w, float h, string c, string type);

	Furniture(const Furniture& f);

	Furniture operator= (const Furniture f);

	~Furniture();

	friend ostream& operator<< (ostream &os, Furniture &f);

	friend istream& operator>> (istream& is, Furniture& f);
};

class Table : public Furniture {	
public:
	string type_table;

	Table();

	Table(float w, float h, string c, string type, string type_T);

	Table(const Table& t);

	~Table();

	friend ostream& operator<< (ostream& os, Table& f);

	friend istream& operator>> (istream& is, Table& f);
};

