#include "tanque.h"
int main() {
	int capacidad, contenido;
	cout<<"Introduzca la capacida del tanque ";
	cin>>capacidad;
	tanque t1(capacidad);
	cout<<"Cuantos litros quiere agregar ";
	cin>>contenido;
	t1.agregarLiquido(contenido);
	cout<<"cuantos litros quiere eliminar? ";
	cin >> contenido;
	t1.sacarLiquido(contenido);
	cout << "el tanque tiene " << t1.chequearliquido() << " litros "<<endl;
	cout << "el tanque tiene una capacidad de " << t1.chequearcapacidad() << " litros "<<endl;
	return 0;
}
