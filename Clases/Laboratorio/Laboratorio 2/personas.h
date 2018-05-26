#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std;
	// Declaraci�n de la clase
	class persona
	{
		//Atributos
		private:
			char nombre [40];
		//M�todos
		public:
			void adquirirNombre();
			void decirNombre();
			void dormir();
			void hablar();
			void contar();
	};
#endif /*__PERSONA_H */
