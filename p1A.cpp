
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; 

struct nombres{

	string alumno;
	string apellido;
	int edad; 
};


int main (){
nombres persona;

cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona.alumno);
cout<<"ingrese la edad: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona.apellido);
cout<<"ingrese dni: "; 
cin>>persona.edad;// al momento de poner el punto se almacena en la variable creada.Xd


nombres persona2;
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona2.alumno);
cout<<"ingrese la edad: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona2.apellido);
cout<<"ingrese dni: "; 
cin>>persona2.edad;// al momento de poner el punto se almacena en la variable creada.Xd

nombres persona3;
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona3.alumno);
cout<<"ingrese la edad: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona3.apellido);
cout<<"ingrese dni: "; 
cin>>persona3.edad;// al momento de poner el punto se almacena en la variable creada.Xd

nombres persona4;
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona4.alumno);
cout<<"ingrese la edad: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona4.apellido);
cout<<"ingrese dni: "; 
cin>>persona4.edad;// al momento de poner el punto se almacena en la variable creada.Xd

nombres persona5;
cout<<"ingrese el nombre de la persona: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona5.alumno);
cout<<"ingrese la edad: "<<endl;
fflush(stdin);//// borrado de datos anteriores 
getline(cin,persona5.apellido);
cout<<"ingrese dni: "; 
cin>>persona5.edad;// al momento de poner el punto se almacena en la variable creada.Xd

cout<<"los datos ingresados son: "<<endl;
cout<<"su datos son : "<<persona.alumno<<"\t"<<persona.apellido<<"\t"<<persona.edad<<endl;
cout<<"su datos son : "<<persona2.alumno<<"\t"<<persona2.apellido<<"\t"<<persona2.edad<<endl;
cout<<"su datos son : "<<persona3.alumno<<"\t"<<persona3.apellido<<"\t"<<persona3.edad<<endl;
cout<<"su datos son : "<<persona4.alumno<<"\t"<<persona4.apellido<<"\t"<<persona4.edad<<endl;
cout<<"su datos son : "<<persona5.alumno<<"\t"<<persona5.apellido<<"\t"<<persona5.edad<<endl;

return 0;
} 
