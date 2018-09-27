#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; 
int cantidad;
struct nombres{
	int dni;
	string ingreso_de_nombres;
	int edad; 
};


int main (){

cout<<"ingrese la cantidad de personas ";
cin>>cantidad;
nombres persona[cantidad];
for(int i=0; i<cantidad;i++){



cout<<"ingrese dni: "; 
cin>>persona[i].dni;// al momento de poner el punto se almacena en la variable creada.Xd
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona[i].ingreso_de_nombres);
cout<<"ingrese la edad: "<<endl;
cin>>persona[i].edad;
}


for(int i=0; i<cantidad;i++){


cout<<"su datos son : "<<persona[i].ingreso_de_nombres<<"\t"<<persona[i].dni<<"\t"<<persona[i].edad<<endl;
}
return 0;
} 
