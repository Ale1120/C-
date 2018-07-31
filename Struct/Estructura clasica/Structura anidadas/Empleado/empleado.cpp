#include <iostream>
using namespace std;
struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dirDireccion;
	double salario;
}empleado[2];

int main (){
	for(int i=0; i<2;i++){
		fflush(stdin);//vaciar el buffer
		cout<<"EMPLEADO "<<i<<endl;
		cout<<"Agregar nombre ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"Agregar direccion ";
		cin.getline(empleado[i].dirDireccion.direccion,30,'\n');
		cout<<"Agregar Ciudad ";
		cin.getline(empleado[i].dirDireccion.ciudad,20,'\n');
		cout<<"Agregar Provincia ";
		cin.getline(empleado[i].dirDireccion.provincia,20, '\n');
		cout<<"Agregar Salario ";
		cin>>empleado[i].salario;
		cout<<endl;
	}
	for(int i=0; i<2; i++){
		cout<<"EMPLEADO "<<i<<endl;
		cout<<"Nombre "<<empleado[i].nombre<<endl;
		cout<<"Direccion "<<empleado[i].dirDireccion.direccion<<endl;
		cout<<"Cuidad "<<empleado[i].dirDireccion.ciudad<<endl;
		cout<<"Provincia "<<empleado[i].dirDireccion.provincia<<endl;
		cout<<"Salario "<<empleado[i].salario<<endl;
		cout<<endl;
	}
	return 0;
}
