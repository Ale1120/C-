/*Ejercicio 3: Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una potencia en n�mero entero positivo y 
despliegue el resultado. El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.*/
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
