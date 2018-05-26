#include "operaciones.h"
#include <iostream>
using namespace std;


//función que suma dos números entereos y devuelve su resultado entero
int suma(int numero1, int numero2)
{
	return numero1+numero2;
}

//función que multiplica dos números enteros y devuelve el resultado entero
int multiplica(int numero1, int numero2)
{
	return numero1*numero2;
}

//función que saluda por pantalla al nombre introducido.  No devuelve valor
void saluda(char nombre[21])
{
	cout<<"Hola "<<nombre<<endl;
}

