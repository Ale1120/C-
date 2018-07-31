#ifndef __PILA_H
	#define __PILA_H
	//#include "string.h"
	#include <iostream>
	using namespace std;
	// Declaraci�n de la clase

	int const MAXPILA = 100; //indicar� la cantidad m�xima de elementos en la pila
	typedef char TElementoPila; //alias para el tipo de dato char

	typedef class pila
	{
		//Atributos
		private:
			TElementoPila Elementos[MAXPILA]; //contendr� los valores de la pila
			int Tope;   //se�alar� al �ltimo elemento de la pila
			
		//M�todos
		public:
			void Crear(); //m�todo constructor. Crea la pila vac�a
			void Apilar(TElementoPila elemento); //inserta un valor en la pila
			TElementoPila Desapilar(); //extrae y devuelve el valor superior de la pila
			bool Llena(); //devuelve true si no hay espacio en la pila
			bool Vacia(); //devuelve true si la pila esta vac�a
			int Cuantos(); //devuelve la cantidad de elementos que hay en la pila
	} TPila;
#endif /*__PILA_H */
