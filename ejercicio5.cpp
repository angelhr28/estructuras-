#include<iostream>
#include<stdio.h>
using namespace std;


struct DatosPersona
{	
	string codigo;
	string nombre;
	int edad;
};

void nuevaEdad(int);
void ingresarDatos(int);
void imprimirDatos(int);

DatosPersona *persona = new DatosPersona[20];

int main () {
	int numero = 0;
	cout << "ingrese el numero de estudiantes : "<<endl;
	cin >> numero;

	ingresarDatos(numero);
	imprimirDatos(numero);

	nuevaEdad(numero);
	imprimirDatos(numero);
	
	
	return 0;

}

void ingresarDatos(int numero) {
	// con array
	for (int i = 0; i < numero; ++i)
	{
		cout << "ingrese codigo: ";
		getline(cin, persona[i].codigo);
		cout << "ingrese apellido:";
		fflush(stdin);
		getline(cin, persona[i].nombre);
		cout << "ingrese edad:";
		cin >> persona[i].edad;
	}

}

void imprimirDatos(int numero) {
	
	for (int i = 0; i < numero; ++i)
	{
		cout << persona[i].codigo;
		cout << persona[i].nombre;
		cout << persona[i].edad;
	}
}
void nuevaEdad(int numero) {
	for (int i = 0; i < numero; ++i)
	{
		persona[i].edad = persona[i].edad + 20;
	}
}
