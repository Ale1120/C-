
#include "estudiante.h"


Estudiante::Estudiante(){
}

Estudiante::Estudiante(string _nombre, int _edad, double _nota) : Persona(_nombre,_edad){
	nota = _nota;
}

void Estudiante::mostrar(){
	Persona::mostrar();//para llamar el polimorfismo;
	cout<<"Nota: "<<nota<<endl;
}
