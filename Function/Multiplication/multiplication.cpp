/*Ejercicio 1: Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como par�metros,
 multiplique estos dos n�meros y despliegue el resultado.*/
 #include <iostream>
 float n1,n2;
 using namespace std;
 void PerdirDatos();
 void Mult(float x, float y);
 int main (){
 	PerdirDatos();
 	Mult(n1,n2);
 	return 0;
 }
 
void PerdirDatos(){
	cout<<"introdusca 2 numeros";
	cin>>n1>>n2;
}
 
 void Mult(float x, float y){
 	float a;
 	a= x*y;
 	cout<<"resultado"<<a;
 }
