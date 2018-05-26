#include "persona.h"
Persona::Persona(){
}
Persona::Persona(int _edad , string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"tengo "<<nombre<<" y estoy leyendo"<<endl;
}

void Persona::correr(){
	cout<<"soy "<<nombre<<" y estoy corriendo"<<endl;
}
