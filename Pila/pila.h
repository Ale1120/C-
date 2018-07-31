#ifndef __PILA_H
	#define __PILA_H
	//#include "string.h"
	#include <iostream>
	using namespace std;
	// Declaración de la clase

	int const MAXPILA = 100; //indicará la cantidad máxima de elementos en la pila
	typedef char TElementoPila; //alias para el tipo de dato char

	typedef class pila
	{
		//Atributos
		private:
			TElementoPila Elementos[MAXPILA]; //contendrá los valores de la pila
			int Tope;   //señalará al último elemento de la pila
			
		//Métodos
		public:
			void Crear(); //método constructor. Crea la pila vacía
			void Apilar(TElementoPila elemento); //inserta un valor en la pila
			TElementoPila Desapilar(); //extrae y devuelve el valor superior de la pila
			bool Llena(); //devuelve true si no hay espacio en la pila
			bool Vacia(); //devuelve true si la pila esta vacía
			int Cuantos(); //devuelve la cantidad de elementos que hay en la pila
	} TPila;
#endif /*__PILA_H */
