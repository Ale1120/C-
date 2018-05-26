#include "rectangulo.h"


int main() {
	double largo , ancho;
	cout<<"Introduzca el largo y el ancho ";
	cin>>largo;
	cin>>ancho;
	Rectangulo r1(largo, ancho);
	cout<<"el area del rectangulo es : "<<r1.area()<<endl;
	cout<<"el perimeto es :"<<r1.perimetro(); 
	
	return 0;
}
