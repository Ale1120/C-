#include "persona.h"

Persona::Persona(){
	
}

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrar(){
	cout<<"Nombre :"<<nombre<<endl;
	cout<<"Edad :"<<edad<<endl;
}
