#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; 
int cantidad;
struct nombres{
	string alumno;
	string apellido;
	int edad; 
};


int main (){

cout<<"ingrese la cantidad de personas ";
cin>>cantidad;
nombres persona[cantidad];
for(int i=0; i<cantidad;i++){



cout<<"ingrese el nombre: "; 
fflush(stdin); 
getline(cin,persona[i].alumno);// al momento de poner el punto se almacena en la variable creada.Xd
cout<<"ingrese el apellido: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona[i].apellido);
cout<<"ingrese el codigo : "<<endl;
cin>>persona[i].edad;
}


for(int i=0; i<cantidad;i++){


cout<<"su datos son : "<<persona[i].alumno<<"\t"<<persona[i].apellido<<"\t"<<persona[i].edad<<endl;
}
return 0;
} 
