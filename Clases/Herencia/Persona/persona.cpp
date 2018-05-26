#include "persona.h"

Persona::Persona(){
}
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}
Alumno::Alumno(){
}
Alumno::Alumno(string _nombre,int _edad, string _id, double _nota) : Persona(_nombre, _edad){
	id = _id;
	nota = _nota;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad:"<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno :"<<id<<endl;
	cout<<"nota: "<<nota<<endl;
}
