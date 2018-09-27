#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; 

struct nombres{
	int dni;
	string ingreso_de_nombres;
	int edad; 
};


int main (){
nombres persona;
cout<<"ingrese dni: "; 
cin>>persona.dni;// al momento de poner el punto se almacena en la variable creada.Xd
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona.ingreso_de_nombres);
cout<<"ingrese la edad: "<<endl;
cin>>persona.edad;

nombres persona2;
cout<<"ingrese dni: "; 
cin>>persona2.dni;// al momento de poner el punto se almacena en la variable creada.Xd
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona2.ingreso_de_nombres);
cout<<"ingrese la edad: "<<endl;
cin>>persona2.edad;

cout<<"los datos ingresados son: "<<endl;
cout<<"su datos son : "<<persona.ingreso_de_nombres<<"\t"<<persona.dni<<"\t"<<persona.edad<<endl;
cout<<"su datos son : "<<persona2.ingreso_de_nombres<<"\t"<<persona2.dni<<"\t"<<persona2.edad;
return 0;
} 
