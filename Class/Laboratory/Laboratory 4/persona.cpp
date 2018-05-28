#include "persona.h"

//implementacion de clase persona

Persona::Persona(){}

Persona::Persona(string _cedula, string _nombre, string _apellido){
	cedula = _cedula;
	nombre = _nombre;
	apellido = _apellido;
}

void Persona::setCalleAvenida(string _calleAvenida){
	direccion.setCalle(_calleAvenida);
}

string Persona::getCalleAvenida(){
	return direccion.getCalle();
}

void Persona::setNumbParcela(int _numParcela){
direccion.setNumero(_numParcela);
}

int Persona::getNumbParcela(){
	return direccion.getNumero();
}

void Persona::setNombreCasaEdf(string _nbCasaEdf){
	direccion.setCasa(_nbCasaEdf);
}

string Persona::getNombreCasaEdf(){
	return direccion.getCasa();
}

void Persona::setPiso(int _piso){
	direccion.setPiso(_piso);
}

int Persona::getPiso(){
	return direccion.getPiso();
}

void Persona::setNumApto(int _apartamento){
	direccion.setApartamento(_apartamento);
}

int Persona::getNumApto(){
	return direccion.getApartamento();
}

void Persona::setUrbanizacion(string _urbanizacion){
	direccion.setNbUrbanizacion(_urbanizacion);
}

 string Persona::getUrbanizacion(){
 	return direccion.getNbUrbanizacion();
 }
 
 void Persona::setCiudad(string _cuidad){
 	direccion.setNbCiudad(_cuidad);
 }
 
string Persona::getCiudad(){
	return direccion.getNbCiudad();
}
