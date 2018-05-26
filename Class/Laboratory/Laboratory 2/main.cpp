#include "personas.h"
#include <iostream>

using namespace std;

// funci�n principal. Es la porci�n ejecutable de un programa en C++
int main()
{
	int respuesta = 0;

	// Creando una persona y capturando su nombre
	cout<<"Desea crear una persona? 1=Si, 0=No: ";
	cin >> respuesta;
	if (respuesta == 1)
	{
		persona variable;			//aqui se declara la variable tipo objeto persona
		variable.adquirirNombre();		//aqu� se llama el m�todo constructor para crear propiamente al objeto en la variable p 

		// si el usuario lo desea la persona puede decir su nombre
		cout << "Desea que diga mi nombre? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.decirNombre();	//aqu� se llama al m�todo que consulta y muestra el par�metro nombre del objeto
		}

		// El usuario decide si la persona habla
		cout << "Quiere escucharme hablar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.hablar();		//aqu� se llama al m�todo del objeto que hace que este hable
		}

		cout << "Desea que vaya a dormir? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.dormir();		//aqu� se llama al m�todo del objeto que hace que este duerma
		}

		cout << "Desea oirme contar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.contar();		//aqu� se llama al m�todo del objeto que hace que este cuente
		}
	}
	system("pause");
	return 0;
}
