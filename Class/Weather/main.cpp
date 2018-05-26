#include "tiempo.h"

int main() {
	int hora,minuto,segundo, selector;
	long tiempoSegundo;
	cout<<"Como desea ingresar la fecha  h:m:s=1 o HMS=2 ";
	cin>>selector;
	if(selector==1){
		cout<<"Introduzca la hora ";
		cin>>hora;
		cout<<"introduzca Los Minutos ";
		cin>>minuto;
		cout<<"introdusca Los segundo ";
		cin>>segundo;
		Tiempo t1(hora,minuto,segundo);
		t1.mostrar();
	}
	else{
		cout<<"Introduzca el Tiempo ";
		cin>>tiempoSegundo;
		Tiempo t1(tiempoSegundo);
		t1.mostrar();
	}
	
	return 0;
}
