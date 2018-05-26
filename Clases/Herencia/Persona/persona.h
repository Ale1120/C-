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
	class Alumno : public Persona {
		private:
			string id;
			double nota;
		public:
			Alumno();
			Alumno(string,int,string,double);
			void mostrarAlumno();
	};
#endif /* __FECHA_H */
