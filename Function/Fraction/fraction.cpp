/*Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el usuario.
 Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.*/
#include<iostream>
#include<conio.h>

 using namespace std;
 
 void pedir_datos();
 void parte_decimal(float x);
 float numero,num_decimal;
 int num_entero ;
 
 int main(){
  pedir_datos();
  parte_decimal(numero);
 
 return 0;
 
 }
 
 void pedir_datos(){
  cout<<"dame un  numero con parte decimal y la separo ";
  cin>>numero;
   
 }
 
 void parte_decimal(float x){
 
 num_entero = numero;
 num_decimal =numero-num_entero;
 
 cout<<"la parte decimal es : "<<num_decimal;
  
 }
