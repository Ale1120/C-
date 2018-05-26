#include "fecha.h"

Fecha::Fecha(){
	
}

Fecha::Fecha(int _dia, int _mes, int _ano){
	dia = _dia;
	mes = _mes;
	ano = _ano;
}
Fecha::Fecha(long fecha){
	ano = int(fecha/10000);
	mes = int((fecha-ano*10000)/100);
	dia = int(fecha-ano*10000-mes*100);
}

void Fecha::mostrar(){
	cout<<"La fecha es : "<<dia<<"/"<<mes<<"/"<<ano;
}
