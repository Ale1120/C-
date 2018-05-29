#include "profesor.h"

Profesor::Profesor(){

}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre,_edad){
	materia = _materia;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"MAteria :"<<materia<<endl;
}
