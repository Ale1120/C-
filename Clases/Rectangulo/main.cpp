#include "rectangulo.h"

int main() {
	double largo,ancho;
	cout<<"Introdusca el largo ";
	cin>>largo;
	cout<<"Introdusca el ancho ";
	cin>>ancho;
	Rectangulo rectangulo1;
	rectangulo1.addlargo(largo);
	rectangulo1.addancho(ancho);
	cout<<"EL RECTANGULO"<<endl;

	cout<<"el area del rectangulo es : "<<rectangulo1.area()<<endl;
	cout<<"el perimeto es :"<<rectangulo1.perimetro(); 
	return 0;
}
