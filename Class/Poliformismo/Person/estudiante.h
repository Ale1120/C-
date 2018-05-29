#include "persona.h"

class Estudiante : public Persona {
	private:
		double nota;
	public:
		Estudiante();
		Estudiante(string,int,double);
		void mostrar();
};


