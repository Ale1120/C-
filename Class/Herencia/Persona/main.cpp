#include "persona.h"


int main() {
	string nombre, id;
	int edad;
	double nota;
	cout<<"Agrege su nombre ";
	cin>>nombre;
	cout<<"Agrege su edad ";
	cin>>edad;
	cout<<"Agrege su codigo ";
	cin>>id;
	cout<<"Agrege su nota ";
	cin>>nota;
	Alumno alumno1(nombre,edad,id,nota);
	alumno1.mostrarAlumno();
	return 0;
}
