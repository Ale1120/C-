#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std ;
	class Persona {
	private: //atributos
		int edad;
		string nombre;
		
	public: //metodos
		Persona();
		Persona(int, string);
		void leer();
		void correr();
};
		
#endif /* __PERSONA_H */
