#include "perro.h"

int main() {
	string nombre, raza;
	cout<<"Ingresa el nombre del perro "<<endl;
	cin>>nombre;
	cout<<"ingresa su raza "<<endl;
	cin>>raza;
	Perro perro1(nombre,raza);
	perro1.mostrar();
	perro1.~Perro();//LLAMADO DEL DESTRUCTOR
	return 0;
}
