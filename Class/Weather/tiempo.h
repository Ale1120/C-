#ifndef __TIEMPO_H
	#define __TIEMPO_H
	#include <iostream>
	using namespace std ;
	class Tiempo {
	private: //atributos
		int hora, minuto, segundo;
		long tiempoSegundo;
		
	public: //metodos
		Tiempo();
		Tiempo(int,int,int);
		Tiempo(long);
		void mostrar();
		
};
		
#endif /* __PERSONA_H */
