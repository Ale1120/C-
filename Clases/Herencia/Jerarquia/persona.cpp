#include "persona.h"

Persona::Persona(){
}

Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(){
}

Empleado::Empleado(string _nombre, int _edad, double _salario, double _horario) : Persona(_nombre, _edad){
	salario = _salario;
	horario = _horario;
}

Estudiante::Estudiante(){
}

Estudiante::Estudiante(string _nombre,int _edad, string _id, double _nota) : Persona(_nombre, _edad){
	id = _id;
	nota = _nota;
}

Universitario::Universitario(){
	
}

Universitario::Universitario(string _nombre,int _edad,string _id,double _nota,int _semestre,string _carrera) : Estudiante (_nombre,_edad,_id, _nota) {
	semestre = _semestre;
	carrera = _carrera;
}


void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad:"<<edad<<endl;
}
void Empleado::mostraEmpleado(){
		mostrarPersona();
		cout<<"el salario es "<<salario<<endl;
		cout<<"El horario es "<<horario<<endl;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Codigo Alumno :"<<id<<endl;
	cout<<"nota: "<<nota<<endl;
}

void Universitario::mostrarUniversitario(){
	mostrarPersona();
	cout<<"El semestre es "<<semestre<<endl;
	cout<<"La carrera es "<<carrera<<endl;
}
