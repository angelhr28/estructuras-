#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; 
struct nombres{
	string alumno;
	int codigo;
	int promedio;
	int edad; 
};
void datos(int);
void futuro(int);


nombres *persona;

int main (){
	int cantidad;
	cout<<"ingrese la cantidad de personas ";
	cin>>cantidad;
	persona=new nombres[cantidad];
	datos(cantidad);
	futuro(cantidad);
	return 0;
}

void datos(int x){

	for(int i=0; i<x;i++){
		cout<<"ingrese el nombre: "; 
		fflush(stdin); 
		getline(cin,persona[i].alumno);// al momento de poner el punto se almacena en la variable creada.Xd
		cout<<"ingrese el codigo : "<<endl;
		cin>>persona[i].codigo;
		cout<<"ingrese la edad : "<<endl;
		cin>>persona[i].edad;
		cout<<"ingrese el promedio : "<<endl;
		cin>>persona[i].promedio;
	
	}
}

void futuro(int x){
	for(int i=0; i<x;i++){
		cout<<"la edad dentro de 20 años de  "<<persona[i].alumno<<"	es	"<<(persona[i].edad)+20<<endl;
	}
} 
