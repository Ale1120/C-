#include "personas.h"
#include <iostream>

using namespace std;

// función principal. Es la porción ejecutable de un programa en C++
int main()
{
	int respuesta = 0;

	// Creando una persona y capturando su nombre
	cout<<"Desea crear una persona? 1=Si, 0=No: ";
	cin >> respuesta;
	if (respuesta == 1)
	{
		persona variable;			//aqui se declara la variable tipo objeto persona
		variable.adquirirNombre();		//aquí se llama el método constructor para crear propiamente al objeto en la variable p 

		// si el usuario lo desea la persona puede decir su nombre
		cout << "Desea que diga mi nombre? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.decirNombre();	//aquí se llama al método que consulta y muestra el parámetro nombre del objeto
		}

		// El usuario decide si la persona habla
		cout << "Quiere escucharme hablar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.hablar();		//aquí se llama al método del objeto que hace que este hable
		}

		cout << "Desea que vaya a dormir? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.dormir();		//aquí se llama al método del objeto que hace que este duerma
		}

		cout << "Desea oirme contar? 1=Si, 0=No: ";
		cin >> respuesta;
		if (respuesta == 1)
		{
			variable.contar();		//aquí se llama al método del objeto que hace que este cuente
		}
	}
	system("pause");
	return 0;
}
