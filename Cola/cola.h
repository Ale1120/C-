#ifndef __COLA_H
	#define __COLA_H
	//#include "string.h"
	#include <iostream>
	using namespace std;
	// Declaración de la clase

	int const MAXCOLA = 100; //indicará la cantidad máxima de elementos en la cola
	typedef int TElementoCola; //alias para el tipo de dato char

	typedef class cola
	{
		//Atributos
		private:
			TElementoCola Elementos[MAXCOLA]; //contendrá los valores de la cola
			int Inicio; //señalará al primer elemento de la cola
			int Fin;   //señalará al último elemento de la cola
			
		//Métodos
		public:
			
			void Crear(); //método constructor. Crea la cola vacía
			void Insertar(TElementoCola elemento); //inserta un valor en la cola
			TElementoCola Extraer(); //extrae y devuelve el primer elemento de la cola
			bool Llena(); //devuelve true si no hay espacio en la cola
			bool Vacia(); //devuelve true si la cola esta vacía
			int Cuantos(); //devuelve la cantidad de elementos que hay en la cola
	} TCola;
#endif /*__COLA_H */
