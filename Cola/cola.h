#ifndef __COLA_H
	#define __COLA_H
	//#include "string.h"
	#include <iostream>
	using namespace std;
	// Declaraci�n de la clase

	int const MAXCOLA = 100; //indicar� la cantidad m�xima de elementos en la cola
	typedef int TElementoCola; //alias para el tipo de dato char

	typedef class cola
	{
		//Atributos
		private:
			TElementoCola Elementos[MAXCOLA]; //contendr� los valores de la cola
			int Inicio; //se�alar� al primer elemento de la cola
			int Fin;   //se�alar� al �ltimo elemento de la cola
			
		//M�todos
		public:
			
			void Crear(); //m�todo constructor. Crea la cola vac�a
			void Insertar(TElementoCola elemento); //inserta un valor en la cola
			TElementoCola Extraer(); //extrae y devuelve el primer elemento de la cola
			bool Llena(); //devuelve true si no hay espacio en la cola
			bool Vacia(); //devuelve true si la cola esta vac�a
			int Cuantos(); //devuelve la cantidad de elementos que hay en la cola
	} TCola;
#endif /*__COLA_H */
