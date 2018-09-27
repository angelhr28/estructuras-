#include<iostream>
#include<stdio.h>
using namespace std;


struct DatosPersona
{	
	string codigo;
	string nombre;
	string apellido;
	int anio_ingreso;
};

int main () {
	int numero = 0;
	cout << "ingrese el numero de estudiantes : "<<endl;
	cin >> numero;

	// con array
	DatosPersona *persona = new DatosPersona[20];
	for (int i = 0; i < numero; ++i)
	{
		cout << "ingrese codigo:";
		getline(cin, persona[i].codigo);
		fflush(stdin);
		cout << "ingrese nombre:";
		getline(cin, persona[i].nombre);
		cout << "ingrese apellido:";
		fflush(stdin);
		getline(cin, persona[i].apellido);
		cout << "ingrese edad:";
		cin >> persona[i].anio_ingreso;
	}

	for (int i = 0; i < numero; ++i)
	{
		cout << persona[i].codigo;
		cout << persona[i].nombre;
		cout << persona[i].apellido;
		cout << persona[i].anio_ingreso;
	}
	return 0;
}

