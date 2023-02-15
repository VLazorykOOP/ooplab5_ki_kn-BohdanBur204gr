#include <iostream>
#include "CarClass.h"
#include "engen.h"
#include "furniture.h"

using namespace std;

void testCassOne() {
	cout << "Task one \nTesing class One" 
		<<"\n\nCreating object class CarClass with constructor default\n" << endl;

	cout << "--------------------------------------------------------------------------" << endl;
	// block test class CarClass
	{
		CarClass car;
		cout << car << endl;
		car.~CarClass();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class CarClass with constructor one parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		CarClass car_two("Toyota");
		cout << car_two << endl;
		car_two.~CarClass();
		cout << "Called destrutctor" << endl;
		
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class CarClass with constructor two parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		CarClass car_three("Toyota", 12);
		cout << car_three << endl;
		car_three.~CarClass();
		cout << "Called destrutctor" << endl;
		
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class CarClass with constructor three parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		CarClass car_four("Toyota", 13, 150);
		cout << car_four << endl;
		car_four.~CarClass();
		cout << "Called destrutctor" << endl;
	}
	
	// block test class Truk
	cout << "\n#########################################################################\n";
	{
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk with constructor default\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk *truk_one = new Truk();
		cout << *truk_one << endl;
		truk_one->~Truk();
		cout << "Called destrutctor" << endl;
		
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk with constructor one parameter\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk *truk_Two = new Truk("Truk");
		cout << *truk_Two << endl;
		truk_Two->~Truk();
		cout << "Called destrutctor" << endl;
		
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk with constructor two parameters\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk *truk_three = new Truk("Truk", 15);
		cout << *truk_three << endl;
		truk_three->~Truk();
		cout << "Called destrutctor" << endl;
		
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk with constructor three parameters\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk* truk_Four = new Truk("Truk", 15, 120);
		cout << *truk_Four << endl;
		truk_Four->~Truk();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk with constructor four parameters\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk* truk_five = new Truk("Truk", 15, 120, 130);
		cout << *truk_five << endl;
		truk_five->set_load_capacity(560);
		truk_five->set_model_car("lololo");
		truk_five->~Truk();
		cout << "Called destrutctor" << endl;
	}
	
	
}

void testCassTwo() {
	/*global path*/
	string f = "Toyota";


	cout << "Task two \nTesing class Two"
		<< "\n\nCreating object class Engen with constructor default\n" << endl;
	// block test class Engen
	{
		cout << "--------------------------------------------------------------------------" << endl;
		Engen* eng = new Engen();
		cout << *eng << endl;
		eng->~Engen();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Engen with constructor one parameter\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Engen* eng_two = new Engen(13);
		cout << *eng_two << endl;

		float set_power_engen;
		cout << endl << "Input value for set power engen: ";
		cin >> set_power_engen;

		cout << "Value power engen changed from " << eng_two->get_power();
		eng_two->set_power(set_power_engen);
		cout << " to " << eng_two->get_power() << endl << endl << "Changed obj" << endl << endl;

		cout << *eng_two << endl;

		eng_two->~Engen();
		cout << "Called destrutctor" << endl;
	}
	

	cout << "\n#########################################################################\n";
	// block test class Car
	{
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Car with constructor default\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Car car;
		cout << car << endl;
		car.~Car();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Car with constructor one parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Car car_two(f);
		cout << car_two << endl;
		car_two.~Car();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Car with constructor two parameters \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Car car_three(f, 12);
		cout << car_three << endl;
		car_three.~Car();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Car with constructor three parameters \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Car car_four(f, 13, 120);
		cout << car_four << endl;
		car_four.~Car();
		cout << "Called destrutctor" << endl;
	}
	

	cout << "\n#########################################################################\n";
	// block test class Truk_Two
	{
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk_Two with constructor default\n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk_Two truk_Two;
		cout << truk_Two << endl;
		truk_Two.~Truk_Two();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk_Two with constructor one parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk_Two *truk_Two_one = new Truk_Two(&f);
		cout << *truk_Two_one << endl;
		truk_Two_one->~Truk_Two();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk_Two with constructor two parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk_Two* truk_Two_two = new Truk_Two(&f, 120);
		cout << *truk_Two_two << endl;
		truk_Two_two->~Truk_Two();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk_Two with constructor three parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk_Two* truk_Two_three = new Truk_Two(&f, 130, 150);
		cout << *truk_Two_three << endl;
		truk_Two_three->~Truk_Two();
		cout << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Truk_Two with constructor four parameter \n";
		cout << "--------------------------------------------------------------------------" << endl;
		Truk_Two* truk_Two_four = new Truk_Two(&f, 130, 150, 456);
		cout << *truk_Two_four << endl;
		truk_Two_four->~Truk_Two();
		cout << "Called destrutctor" << endl;

		cout << "\n#########################################################################\n";
	}
}

void testCassThree() {
	// block test class Furniture
	{
		cout << "Task three \nTesing class Three"
			<< "\n\nCreating object class Furniture with constructor default\n" << endl;
		cout << "--------------------------------------------------------------------------" << endl << endl;
		Furniture* Fur = new Furniture();
		cin >> *Fur;
		cout << endl << "Data in Class" << endl << *Fur << endl;

		cout << endl << "Called constructor copy = " << endl;
		Furniture* Fur_two = new Furniture();
		Fur_two = Fur;
		cout << "Add obj Fur = " << Fur << endl << "Add obj Fur_two = " << Fur_two << endl;

		cout << endl <<"Called constructor copy () " << endl;
		Furniture* Fur_three = new Furniture(*Fur);
		cout << "Add obj Fur = " << Fur << endl << "Add obj Fur_three = " << Fur_three << endl;

		Fur_three->~Furniture();
		cout << endl << "Called destrutctor";
		Fur_two->~Furniture();
		cout << endl << "Called destrutctor";
		Fur->~Furniture();
		cout << endl << "Called destrutctor" << endl;


		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Furniture with constructor all parameters \n";
		cout << "--------------------------------------------------------------------------" << endl;

		Furniture* Fur_all = new Furniture(2.5, 3.5, "Brown", "Table");
		cout << endl << *Fur_all << endl;

		Fur_all->~Furniture();
		cout << endl << "Called destrutctor" << endl;
	}

	cout << "\n#########################################################################\n";
	// block test class Table
	{
		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Table with constructor default \n";
		cout << "--------------------------------------------------------------------------" << endl;

		Table* table = new Table();
		cin >> *table;
		cout << endl << "Data in Class" << endl << *table << endl;

		cout << endl << "Called constructor copy () " << endl;
		Table* table_copy = new Table(*table);
		cout << "Add obj Fur = " << table << endl << "Add obj Fur_three = " << table_copy << endl;

		table_copy->~Table();
		cout << endl << "Called destrutctor";
		table->~Table();
		cout << endl << "Called destrutctor" << endl;

		cout << "\n--------------------------------------------------------------------------" << endl;
		cout << "Creating object class Furniture with constructor all parameters \n";
		cout << "--------------------------------------------------------------------------" << endl;

		Table* table_all = new Table(2.5, 3.5, "Brown", "Table", "Coffee table");
		cout << *table_all << endl;

		table_all->~Table();
		cout << endl << "Called destrutctor" << endl;
	}
	
}

int main()
{
	while (0==0) {
		int choose;
		cout << "\nChoose task 1, 2, or 3: if you want to complete the program input number 10 : ";
		cin >> choose;

		switch (choose)
		{
		case 1:
			system("cls");
			testCassOne();
			break;
		case 2:
			system("cls");
			testCassTwo();
			break;
		case 3:
			system("cls");
			testCassThree();
			break;
		default:
			break;
		}

		if (choose == 10) break;
	}
	return 0;
}
