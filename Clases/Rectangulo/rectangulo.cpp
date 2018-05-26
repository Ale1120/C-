#include "rectangulo.h"
Rectangulo::Rectangulo(){
}

void Rectangulo::addlargo(double _largo){
	largo = _largo;
}
void Rectangulo::addancho(double _ancho){
	ancho = _ancho;
}

double Rectangulo::perimetro(){
	return 2 * (ancho + largo);
}
double Rectangulo::area(){
	return ancho*largo;
}
