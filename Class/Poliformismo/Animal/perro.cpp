#include "perro.h"

Perro::Perro(){
}

Perro::Perro(string _nombre, int _edad, string _raza) : Animal(_nombre,_edad){
	raza = _raza;
}

void Perro::comer(){
	cout<<"Raza :"<<raza<<endl;
	Animal::comer();
	cout<<" En el piso"<<endl;
	
}
