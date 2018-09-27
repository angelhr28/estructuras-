#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;


struct datos{
	string nombre;
	string apellido;
	int edad;
};
 


int main (){
 datos *persona=new datos[5];
 //persona=new int[5];	
for(int i=0;i<5;i++){
	cout<<"ingrese el nombre: "<<endl;
	fflush(stdin);
	getline(cin,persona[i].nombre);
	cout<<"ingrese el apellido"<<endl;
	fflush(stdin);
	getline(cin,persona[i].apellido);
	cout<<"ingrese su edad: "<<endl;
	cin>>persona[i].edad;
}	
for (int i=0;i<5;i++){
	cout<<"pasiente "<<i+1<<"	"<<persona[i].nombre <<"	"<<persona[i].apellido<<endl;
	cout<<"la edad del paciente "<<i+1<<"  es: "<<persona[i].edad<<endl; 
}
	
}
