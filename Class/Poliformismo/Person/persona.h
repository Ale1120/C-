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
			virtual void mostrar();//polimorfismo
		
	};
#endif
