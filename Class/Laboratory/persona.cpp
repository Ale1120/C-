#include "persona.h"
//implementacion de clase persona

//Implementacion de Classe Direccion

Direccion::Direccion(){}

Direccion::Direccion(string _calleAvenida, int _numParcela){
	calleAvenida = _calleAvenida;
	numParcela = _numParcela;	
}

void Direccion::setCalle(string _calleAvenida){
	calleAvenida = _calleAvenida;
}

string Direccion::getCalle(){
	return calleAvenida;
}

void Direccion::setNumero(int _numParcela){
	numParcela = _numParcela;
}

int Direccion::getNumero(){
	return numParcela;
}

void Direccion::setCasa(string _nbCasaEdf){
	nbCasaEdf = _nbCasaEdf;
}

string Direccion::getCasa(){
	return nbCasaEdf;
}

void Direccion::setPiso(int _piso){
	piso = _piso;
}

int Direccion::getPiso(){
	return piso;
}

void Direccion::setApartamento(int _apartamento){
	apartamento = _apartamento;
}

int Direccion::getApartamento(){
	return apartamento;
}

void Direccion::setNbUrbanizacion(string _urbanizacion){
	urbanizacion = _urbanizacion;
}

 string Direccion::getNbUrbanizacion(){
 	return urbanizacion;
 }
 
 void Direccion::setCiudad(string _cuidad){
 	cuidad = _cuidad;
 }
 
string Direccion::getCiudad(){
	return cuidad;
}


Persona::Persona(){}

Persona::Persona(string _cedula, string _nombre, string _apellido){
	cedula = _cedula;
	nombre = _nombre;
	apellido = _apellido;
}

void Persona::setCalleAvenida(string _calleAvenida){
	calleAvenida = _calleAvenida;
}

string Persona::getCalleAvenida(){
	return calleAvenida;
}

void Persona::setNumbParcela(int _numParcela){
	numParcela = _numParcela;
}

int Persona::getNumbParcela(){
	return numParcela;
}

void Persona::setNombreCasaEdf(string _nbCasaEdf){
	nbCasaEdf = _nbCasaEdf;
}

string Persona::getNombreCasaEdf(){
	return nbCasaEdf;
}

void Persona::setPiso(int _piso){
	piso = _piso;
}

int Persona::getPiso(){
	return piso;
}

void Persona::setNumApto(int _apartamento){
	apartamento = _apartamento;
}

int Persona::getNumApto(){
	return apartamento;
}

void Persona::setUrbanizacion(string _urbanizacion){
	urbanizacion = _urbanizacion;
}

 string Persona::getUrbanizacion(){
 	return urbanizacion;
 }
 
 void Persona::setCiudad(string _cuidad){
 	cuidad = _cuidad;
 }
 
string Persona::getCiudad(){
	return cuidad;a
}




