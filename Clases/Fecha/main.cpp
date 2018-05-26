#include "fecha.h"

int main() {
	int dia,mes,ano, selector;
	long fecha;
	cout<<"Como desea ingresar la fecha  d/m/a=1 o AMD=2 ";
	cin>>selector;
	if(selector==1){
		cout<<"Introduzca el dia ";
		cin>>dia;
		cout<<"introduzca el mes ";
		cin>>mes;
		cout<<"introdusca el año ";
		cin>>ano;
		Fecha d1(dia,mes,ano);
		d1.mostrar();
	}
	else{
		cout<<"Introduzca la fecha ";
		cin>>fecha;
		Fecha d1(fecha);
	d1.mostrar();
	}
	
	return 0;
}
