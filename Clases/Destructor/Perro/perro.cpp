#include "perro.h"
Perro::Perro(){
}
Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}
Perro::~Perro(){
	
}
void Perro::mostrar(){
	cout<<"Mi nombre es "<<nombre<<" y son de raza "<<raza;
}
