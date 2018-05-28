#include "persona.h"
int main() {
	string cedula;
	string nombre;
	string apellido;
	string calleAvenida;
	int numParcela;
	string nbCasaEdf;
	int piso;
	int apartamento;
	string urbanizacion;
	string cuidad;
	
	cout<<"introduzca su cedula :";
	cin>>cedula;
	cout<<"introduzca su nombre :";
	cin>>nombre;
	cout<<"introduzca su apellido :";
	cin>>apellido;
	cout<<"introduzca su nombre de la calle o avenida :";
	cin>>calleAvenida;
	cout<<"introduzca su numero de la Parcela :";
	cin>>numParcela;
	cout<<"introduzca su numero de la Casa o del Edificio :";
	cin>>nbCasaEdf;
	cout<<"introduzca su  numero de el Piso :";
	cin>>piso;
	cout<<"introduzca su numero de el Apartamento :";
	cin>>apartamento;
	cout<<"introduzca su nombre de la Urbanizacion :";
	cin>>urbanizacion;
	cout<<"introduzca su nombre de  la Cuidad :";
	cin>>cuidad;
	Persona persona(cedula, nombre, apellido);
	persona.getCalleAvenida();
	return 0;
}

