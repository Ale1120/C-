#include "pila.h"

void TPila::Crear()
{
	Tope = -1;
}

void TPila::Apilar(TElementoPila elemento)
{
	if (!Llena())
	{
	 Tope = Tope+1;			//incrementa tope
		Elementos [Tope] = elemento;	//guarda el elemento en la posici�n superior
	}
	else
	{
		//No hace nada
	}
}

 TElementoPila TPila::Desapilar()
 {
    TElementoPila aux;
	if (!Vacia())
	{
	 aux = Elementos[Tope];
	 Tope = Tope -1;		//actualiza el nuevo tope
	 return aux;	//retorna el  elemento que est� en el tope de la pila
	
	}
	else
	{
		return -9; //-9 indica que no hay elementos para devolver
	}
 }

bool TPila::Llena()
{
	return Tope == MAXPILA-1;	//devuelve TRUE si Tope apunta a la �ltima posici�n del arreglo
}


bool TPila::Vacia()
{
	return Tope == -1; 	//devuelve FALSE si Tope apunta a alguna posici�n del arreglo 
}

int TPila::Cuantos()
{
	if (!Vacia())
	{
		return Tope + 1;	//devuelve la cantidad de elementos 
	}
	else
	{
		return 0;		//devuelve 0 porque el arreglo est� vac�o
	}
}
