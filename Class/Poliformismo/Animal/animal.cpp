#include "animal.h"

Animal::Animal(){
	
}

Animal::Animal(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
	
}

void Animal::comer(){
	cout<<"Nombre :"<<nombre<<endl;
	cout<<"Edad :"<<edad<<endl;
	cout<<"Yo como";
}
