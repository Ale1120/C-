/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y 
despliegue el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.*/
#include <iostream>
#include<math.h>
using namespace std;

void perdirdatos();
void potencia(int x, int y);

int numero, exponente;

int main (){
	perdirdatos();
	potencia(numero,exponente);
	return 0;
}
void perdirdatos(){
	cout<<"introdusca el numero ";
	cin>>numero;
	cout<<"introdusca el exponente ";
	cin>>exponente;
}
void potencia(int x, int y){
	int potencia=(pow(x,y));
	cout<<"el resultado es "<<potencia;
}
