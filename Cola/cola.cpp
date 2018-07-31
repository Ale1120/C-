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
		if (Vacia())    //ser� el primer elemento en entrar al arreglo
		{
			Inicio = Inicio+1;			//incrementa el inicio
			Fin = Fin + 1;
		}
		else    //ya hay al menos un elemento
		{
			if (Fin == MAXCOLA-1)  //fin est� en la �ltima posici�n del arreglo
	    	{
				Fin = 0;   //el elemento deber� ir en la primera posici�n
			}
			else
			{
				Fin = Fin + 1; //fin est� en la �ltima posici�n del arreglo
			} 
		}
		Elementos[Fin] = elemento;  // aqu� se insert� el elemento
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
		if (Inicio  == Fin)       //Hay s�lo un elemento.  El que queda
		{
			Inicio = -1;
			Fin = -1;
		}
		else   //Hay m�s de un elemento.  �d�nde est� inicio?
		{
			if (Inicio == MAXCOLA-1)   //Inicio est� al final del arreglo
			{
				Inicio = 0;    //debe pasar a la primera posici�n del arreglo
			}
			else     //Inicio est� en cualquier posici�n. S�lo se incrementa
			{
				Inicio = Inicio + 1;
			}
		}
		
		return Elemen;  //retorna el elemento y deja de ejecutarse el m�todo
	}
	else
	{
		return 1; //regresa -999 indicando que la cola esta vac�a
	}
 }

bool TCola::Llena()
{
	if (((Inicio == 0) && (Fin == MAXCOLA-1)) || (Fin - Inicio == -1))
	{
		return 0;  //devuelve TRUE porque est� llena
	}
	else
	{	
		return 1;  // devuelve FALSE si hay al menos una posici�n vac�a 
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
		{   //Hay un �nico elemento
		     return 1;
		}
		else    //Hay m�s de un elemento
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


