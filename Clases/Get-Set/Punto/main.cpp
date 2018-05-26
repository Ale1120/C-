#include "Punto.h"



int main() {
	int x,y;
	cout<<"introduzca el valor de x ";
	cin>>x;
	cout<<"introduzca el valor de y ";
	cin>>y;
	Punto punto1;
	punto1.setPunto(x,y);
	cout<<"El punto es el siguiente en X: "<<punto1.getX()<<" Y: "<<punto1.getY();
	return 0;
}
