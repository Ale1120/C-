#include "humano.h"

Humano::Humano(){
	
}
Humano::Humano(string _nombre,int _edad, string _nacionalidad) : Animal(_nombre,_edad){
	nacionalidad = _nacionalidad;
}

void Humano::comer(){
	cout<<"Nacionalidad :"<<nacionalidad<<endl;
	Animal::comer();
	cout<<" En una mesa"<<endl;
}
