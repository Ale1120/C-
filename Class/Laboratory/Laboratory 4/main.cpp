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
	
	
	cout<<"PERSONA"<<endl;
	
	Persona alejandro("22762663","Alejandro","Apellido");
	alejandro.setCalleAvenida("Norte");
	alejandro.setNumbParcela(1);
	alejandro.setNombreCasaEdf("22");
	alejandro.setPiso(0);
	alejandro.setNumApto(0);
	alejandro.setUrbanizacion("Florida");
	alejandro.setCiudad("Caracas");
	
	cout<<"Calle/Av. "<<alejandro.getCalleAvenida()<<endl;
	cout<<"Nº Parcela "<<alejandro.getNumbParcela()<<endl;
	cout<<"Nombre Casa/Edificio "<<alejandro.getNombreCasaEdf()<<endl;
	cout<<"Nº Piso "<<alejandro.getPiso()<<endl;
	cout<<"Nº Apartamento "<<alejandro.getNumApto()<<endl;
	cout<<"Nombre Urbanizacion "<<alejandro.getUrbanizacion()<<endl;
	cout<<"Cuidad "<<alejandro.getCiudad()<<endl;
	system("pause");
	system("cls");
	
	
	cout<<"introduzca su cedula : ";
	cin>>cedula;
	cout<<"introduzca su nombre : ";
	cin>>nombre;
	cout<<"introduzca su apellido : ";
	cin>>apellido;
	cout<<"introduzca su nombre de la calle o avenida : ";
	cin>>calleAvenida;
	cout<<"introduzca su numero de la Parcela : ";
	cin>>numParcela;
	cout<<"introduzca su numero de la Casa o del Edificio : ";
	cin>>nbCasaEdf;
	cout<<"introduzca su  numero de el Piso : ";
	cin>>piso;
	cout<<"introduzca su numero de el Apartamento : ";
	cin>>apartamento;
	cout<<"introduzca su nombre de la Urbanizacion : ";
	cin>>urbanizacion;
	cout<<"introduzca su nombre de  la Cuidad : ";
	cin>>cuidad;
	
	Persona persona(cedula,nombre,apellido);
	persona.setCalleAvenida(calleAvenida);
	persona.setNumbParcela(numParcela);
	persona.setNombreCasaEdf(nbCasaEdf);
	persona.setPiso(piso);
	persona.setNumApto(apartamento);
	persona.setUrbanizacion(urbanizacion);
	persona.setCiudad(cuidad);
	
	
	cout<<"Calle/Av. "<<persona.getCalleAvenida()<<endl;
	cout<<"Nº Parcela "<<persona.getNumbParcela()<<endl;
	cout<<"Nombre Casa/Edificio "<<persona.getNombreCasaEdf()<<endl;
	cout<<"Nº Piso "<<persona.getPiso()<<endl;
	cout<<"Nº Apartamento "<<persona.getNumApto()<<endl;
	cout<<"Nombre Urbanizacion "<<persona.getUrbanizacion()<<endl;
	cout<<"Cuidad "<<persona.getCiudad()<<endl;

	return 0;
}
