/* Ejercicio 5: Escriba una plantilla de funci�n llamada despliegue() 
que despliegue el valor del argumento �nico que se le transmite cuando es invocada la funci�n.*/
#include<iostream>
template <class Plantilla>
void despliegue(Plantilla dato);
char valor;
using namespace std;
int main (){
	cout<<"indrousca el caracter ";
	cin>>valor;
	despliegue(valor);
return 0;
}


template <class Plantilla>
void despliegue(Plantilla dato){
	cout<<"el dato es :"<<dato;
}
