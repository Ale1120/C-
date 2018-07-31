#include "Cola.h"

void TCola::Crear()
{
	Inicio  = -1;
	Fin = -1;
}

void TCola::Insertar(TElementoCola elemento)
{
	if (!Llena())    //existe al menos un espacio libre en el arreglo
	{
		if (Vacia())    //será el primer elemento en entrar al arreglo
		{
			Inicio = Inicio+1;			//incrementa el inicio
			Fin = Fin + 1;
		}
		else    //ya hay al menos un elemento
		{
			if (Fin == MAXCOLA-1)  //fin está en la última posición del arreglo
	    	{
				Fin = 0;   //el elemento deberá ir en la primera posición
			}
			else
			{
				Fin = Fin + 1; //fin está en la última posición del arreglo
			} 
		}
		Elementos[Fin] = elemento;  // aquí se insertó el elemento
	}
	else    //la cola esta llena
	{
		//No hace nada
	}
}

 TElementoCola TCola::Extraer()
 {
	TElementoCola Elemen;
	if (!Vacia())	//hay al menos un elemento
	{
		Elemen = Elementos[Inicio];	//asigna a la variable el elemento que apunta  el inicio
		if (Inicio  == Fin)       //Hay sólo un elemento.  El que queda
		{
			Inicio = -1;
			Fin = -1;
		}
		else   //Hay más de un elemento.  ¿dónde está inicio?
		{
			if (Inicio == MAXCOLA-1)   //Inicio está al final del arreglo
			{
				Inicio = 0;    //debe pasar a la primera posición del arreglo
			}
			else     //Inicio está en cualquier posición. Sólo se incrementa
			{
				Inicio = Inicio + 1;
			}
		}
		
		return Elemen;  //retorna el elemento y deja de ejecutarse el método
	}
	else
	{
		return 1; //regresa -999 indicando que la cola esta vacía
	}
 }

bool TCola::Llena()
{
	if (((Inicio == 0) && (Fin == MAXCOLA-1)) || (Fin - Inicio == -1))
	{
		return 0;  //devuelve TRUE porque está llena
	}
	else
	{	
		return 1;  // devuelve FALSE si hay al menos una posición vacía 
	}

}


bool TCola::Vacia()
{
	return (Inicio == Fin) && (Fin == -1); //devuelve FALSE si hay al menos un elemento
}

int TCola::Cuantos()
{
	if (Vacia())
	{
		return 0;	 
	}
	else     //Hay al menos un elemento
	{
		if (Inicio == Fin)  
		{   //Hay un único elemento
		     return 1;
		}
		else    //Hay más de un elemento
		{	
			if (Inicio > Fin)
			{
				return (MAXCOLA-Inicio) + (Fin + 1);
			}
			else
			{
				return (Fin - Inicio)+1;
			}
		}
	}
}


