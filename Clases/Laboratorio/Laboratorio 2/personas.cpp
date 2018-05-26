#include "personas.h"

// Declaración de las funciones de la clase

void persona::adquirirNombre()
{
	cout << "Soy una persona. Ingrese mi nombre: ";
	cin >> nombre;
}

void persona::decirNombre()
{
	cout << "Mi nombre es: " << nombre << endl;
}

void persona::dormir()
{
	cout << "zzzzzzzzz" << endl;
}

void persona::hablar()
{
	cout << "bla bla bla bla" << endl;
}

void persona::contar()
{
	cout << "1, 2, 3, 4, 5..." << endl;
}

