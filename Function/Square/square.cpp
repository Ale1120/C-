/*Ejercicio 2: Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. 
La función deberá ser capaz de elevar al cuadrado números flotantes.*/
#include <iostream>
#include<math.h>
float n1,n2; 
using namespace std;
void PerdirDatos();
void Cuadrado(float x);
int main (){
	PerdirDatos();
	Cuadrado(n1);
	return 0;
}
 void PerdirDatos(){
 	cout<<"indrodusca 1 numeros ";
 	cin>>n1;
 }
 
 void Cuadrado(float x){
 	float cuadrado;
 	cuadrado = (pow(x,2));
 	cout<<"el cuadrado "<<cuadrado;
 }
