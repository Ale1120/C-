#include "persona.h"

int main() {
	int edad;
	string nombre;
	cout<<"Introduzca la edad ";
	cin>>edad;
	cout<<"Introduzca el nombre ";
	cin>>nombre;
	Persona p1(edad, nombre);
	p1.correr();
	p1.leer();
	
	return 0;
}

