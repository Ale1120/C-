/* Ejercicio 9: Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y 
tres parámetros de referencia enteros nombrados horas,min y seg. 
La función es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos. */
#include <iostream>
using namespace std;
void tiempo(int, int&,int&,int&);
int main(){
	int totalseg, horas,min,seg;
	cout<<"introdusca el total de segundos ";
	cin>>totalseg;
	tiempo(totalseg,horas,min,seg);
	cout<<"EL tiempo trasncurrido es "<<horas<<":"<<min<<":"<<seg;
	return 0;
}

void tiempo(int totalseg,int& horas,int& min,int& seg){
	horas =totalseg/3600; totalseg%=3600;
	min= totalseg/60; totalseg%=60;
	seg= totalseg%60;
}
