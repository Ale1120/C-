#include "persona.h"

Persona::Persona(string _cedula,string _nombre, string _apellido){
	cedula = _cedula;
	nombre = _nombre;
	apellido = _apellido;
}
void Persona::setCalle(string _calleAv){
	direccion.set_Calle(string _calleAv)
}
srting Persona::getCalle(){
	return calleAV;
}
void Persona::setNumero(int _numParcela){
	direccion.set_Numero(int _numParcela):
}
int Persona::GetNumero(){
	return direccion.get_Numero();
}
void Persona::setCuidad(string _cuidad){
	direccion.set_Cuidad(_cuidad);
}
string Persona::getCuidad(){
	return direccion.get_Cuidad();
}

//clase Direccion

Direccion::Direccion(){
	
}
Direccion::Direccion(){
}


