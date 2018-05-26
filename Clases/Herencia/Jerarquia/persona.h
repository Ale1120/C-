#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std;
	class Persona {
		private:
			string nombre;
			int edad;
		public:
			Persona();
			Persona(string,int);
			void mostrarPersona();
		
	};
	
	class Empleado : public Persona{
		private:
			double salario,horario;
		public:
			Empleado();
			Empleado(string,int,double,double);
			void mostraEmpleado();
			
	};
	
	class Estudiante : public Persona {
		private:
			string id;
			double nota;
		public:
			Estudiante();
			Estudiante(string,int,string,double);
			void mostrarEstudiante();
	};
	
	class Universitario : public Estudiante {
		private:
			int semestre;
			string carrera;
		public:
			Universitario();
			Universitario(string,int,string,double,int,string);
			void mostrarUniversitario();
			
	};
#endif /* __FECHA_H */
