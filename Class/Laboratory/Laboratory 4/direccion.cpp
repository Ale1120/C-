#include "direccion.h"
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
 
 void Direccion::setNbCiudad(string _cuidad){
 	cuidad = _cuidad;
 }
 
string Direccion::getNbCiudad(){
	return cuidad;
}






