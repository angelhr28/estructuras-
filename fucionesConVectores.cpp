#include<iostream>
#include<conio.h>
using namespace std;
int n;
//crearmos nuestra estrcutura
struct Datos{
	 
	int dni;
	string nombre;
	int edad;
	
};
void llenar(Datos estudiante[]);
void mostrar(Datos estudiante[]);

int main(){
	Datos *alumno=new Datos[20];
	llenar(alumno);
	mostrar(alumno);
	
}

void llenar(Datos estudiante[]){
	

	cout<<"ingrese los datos: "<<endl;
	for(int i=1;i<=n;i++){
		cout<<"ingrese el dni: ";
		cin>>estudiante[i].dni;
		cout<<"ingrese el nombre es: ";
		fflush(stdin);
		getline(cin,estudiante[i].nombre);
		cout<<"ingrese su edad: ";
		cin>>estudiante[i].edad;
	}
}
void mostrar(Datos estudiante[]){
	

	cout<<"ingrese los datos: "<<endl;
	for(int i=1;i<=n;i++){
		cout<<"su dni es  ";
		cout<<estudiante[i].dni<<endl;
		cout<<"su nombre es: ";
		
		cout<<estudiante[i].nombre<<endl;
		cout<<"su su edad: ";
		cout<<estudiante[i].edad;
	}
}

	

