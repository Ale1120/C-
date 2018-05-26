/* Ejercicio 5: Escriba una plantilla de función llamada despliegue() 
que despliegue el valor del argumento único que se le transmite cuando es invocada la función.*/
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
