#include "rectangulo.h"
Rectangulo::Rectangulo(){
	
}

Rectangulo::Rectangulo(double _largo, double _ancho){
	largo = _largo;
	ancho = _ancho;
	
}

double Rectangulo::perimetro(){
	return 2 * (ancho + largo);
}
double Rectangulo::area(){
	return ancho*largo;
}
