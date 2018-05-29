
#include "estudiante.h"
#include "profesor.h"

int main() {
	Persona *vector[3];//puntero
	
	vector[0] = new Estudiante("alejandro",22,15.5);
	vector[1] = new Profesor("Anthony",22,"Programacion");
	cout<<endl;
	vector[0]->mostrar();//llamar a la funcion
	cout<<endl;
	vector[1]->mostrar();
	
	return 0;
}
