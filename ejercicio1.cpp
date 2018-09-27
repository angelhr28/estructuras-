#include<iostream>
#include<stdio.h>
using namespace std;


struct DatosPersona
{	
	string nombre;
	string apellido;
	int edad;
};

int main () {

	// sin punteros
	DatosPersona persona1[20];
	for (int i = 0; i < 5; i++)
	{
		cout << "ingrese nombre:";
		getline(cin, persona1[i].nombre);
		cout << "ingrese apellido:";
		fflush(stdin);
		getline(cin, persona1[i].apellido);
		cout << "ingrese edad:";
		cin >> persona1[i].edad;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << persona1[i].nombre;
		cout << persona1[i].apellido;
		cout << persona1[i].edad;
	}

	// con punteros
	DatosPersona *persona2 = new DatosPersona[20];
	for (int i = 0; i < 5; i++)
	{
		cout << "ingrese nombre:";
		getline(cin, persona2[i].nombre);
		cout << "ingrese apellido:";
		fflush(stdin);
		getline(cin, persona2[i].apellido);
		cout << "ingrese edad:";
		cin >> persona2[i].edad;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << persona2[i].nombre;
		cout << persona2[i].apellido;
		cout << persona2[i].edad;
	}

	// con array
	DatosPersona *persona3 = new DatosPersona[20];
	for (int i = 0; i < 5; i++)
	{
		cout << "ingrese nombre:";
		getline(cin, persona3[i].nombre);
		cout << "ingrese apellido:";
		fflush(stdin);
		getline(cin, persona3[i].apellido);
		cout << "ingrese edad:";
		cin >> persona3[i].edad;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << persona3[i].nombre;
		cout << persona3[i].apellido;
		cout << persona3[i].edad;
	}
	return 0;
}
