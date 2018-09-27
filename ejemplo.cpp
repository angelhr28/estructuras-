#include<iostream>
#include<stdio.h>
using namespace std;


struct DatosPersona
{	
	int dni;
	string nombre;
	int edad;
};

int main () {

	// sin punteros
	DatosPersona persona1;
	cout << "ingrese dni:";
	cin >> persona1.dni;
	cout << "ingrese nombre:";
	fflush(stdin);
	getline(cin, persona1.nombre);
	cout << "ingrese edad:";
	cin >> persona1.edad;

	cout << persona1.dni;
	cout << persona1.nombre;
	cout << persona1.edad;


	// con punteros
	DatosPersona *persona2 = new DatosPersona;
	cout << "ingrese dni:";
	cin >> persona2 -> dni;
	cout << "ingrese nombre:";
	fflush(stdin);
	getline(cin, persona2->nombre);
	cout << "ingrese edad:";
	cin >> persona2->edad;

	cout << persona2.dni;
	cout << persona2.nombre;
	cout << persona2.edad;

	// con array
	DatosPersona *persona3 = new DatosPersona[20];
	for (int i = 0; i < 3; ++i)
	{
		cout << "ingrese dni:";
		cin >> persona3.dni;
		cout << "ingrese nombre:";
		fflush(stdin);
		getline(cin, persona3.nombre);
		cout << "ingrese edad:";
		cin >> persona3.edad;
	}

	for (int i = 0; i < 3; ++i)
	{
		cout << persona3.dni;
		cout << persona3.nombre;
		cout << persona3.edad;
	}

}
