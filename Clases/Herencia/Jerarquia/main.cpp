#include "persona.h"


int main() {
	string nombre, id,carrera;
	int edad, semestre, opcion;
	double nota,salario,horario;

	cout<<"Agrege su nombre ";
	cin>>nombre;
	cout<<"Agrege su edad ";
	cin>>edad;
	cout<<"Agrege su codigo ";
	cin>>id;
	cout<<"Agrege su nota ";
	cin>>nota;
	cout<<"Agrege su salario ";
	cin>>salario;
	cout<<"Agrege su horario ";
	cin>>horario;
	cout<<"Agrege su semestre ";
	cin>>semestre;
	cout<<"Agrege su carrera ";
	cin>>carrera;
	
	Estudiante estudiante1(nombre,edad,id,nota);
	Empleado empleado1(nombre,edad,salario,horario);
	Universitario universitario1(nombre,edad,id,nota,semestre,carrera);
	cout<<endl;
	cout<<"el alumno "<<endl;
	estudiante1.mostrarEstudiante();
	cout<<endl;
	cout<<"el empleado "<<endl;
	empleado1.mostraEmpleado();
	cout<<endl;
	cout<<"El universitario "<<endl;
	universitario1.mostrarUniversitario();
	return 0;
}
