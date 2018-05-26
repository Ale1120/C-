#include "tiempo.h"

Tiempo::Tiempo(){
}
Tiempo::Tiempo(int _hora,int _minuto, int _segundo){
	hora = _hora;
	minuto = _minuto;
	segundo = _segundo;
}
Tiempo::Tiempo(long _tiempoSegundo){
	hora = int(_tiempoSegundo/3600);
	_tiempoSegundo %= 3600;
	minuto = int(_tiempoSegundo/60);
	segundo = int(_tiempoSegundo%60);
}
void Tiempo::mostrar(){
	cout<<"La hora es "<<hora<<":"<<minuto<<":"<<segundo;
}
