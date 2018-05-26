#include "tanque.h"
using namespace std;
tanque::tanque(){
}
tanque::tanque(int cap){
	capacidad = cap;
}

void tanque::agregarLiquido(int con){
	if (con <= capacidad-contenido){
	contenido = contenido + con;
		
	}
	else {
		cout << "No se puede agregar esa cantidad de liquido , no se puede agregar mas de :"<<capacidad - contenido<<endl;
	}
}
	
void tanque::sacarLiquido(int con){
	if(con <= contenido){
		contenido= contenido - con;	
	}
	else{
		contenido=0;
		
	}
}

int tanque::chequearliquido(){
	return contenido;
}
int tanque::chequearcapacidad(){
	return capacidad;
}
